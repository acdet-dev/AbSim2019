#include <Wire.h>

// constant variables 
const int ROWS = 31; // number of digital channels
const int COLS = 12; // number of analog channels

// variable declarations
byte byInput = 0; // raw input command 
int nInput = 0; // input command integer holding ailment & command selection (x0 -> x ailment # inactive or x1 -> x ailment # active)
int nIRVal = 0;    // mapped ailment IR sensor value

int nDigitalPinArray[] = {22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,18,19,53,52}; // 20->53 & 21 -> 52
int nAnalogPinArray[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; // analog and digital pin arrays
int nPadValuesArray[COLS]; // pad raw value array
int nMappedPadValuesArray[COLS]; // mapped pad value array (0 - 255)

int nIndexI = 0; // general indices 
int nIndexJ = 0; 
int nIndexK = 0;

////////////////////////////////////////////////////////////////////
// setup function to declare pins and initialize serial communications
////////////////////////////////////////////////////////////////////
void setup() 
{
  for (nIndexI = 0; nIndexI < ROWS ; nIndexI++) 
  {
    // declaration digital pins as OUTPUTS
    pinMode(nDigitalPinArray[nIndexI], OUTPUT); 
  } 
    
  for (nIndexI = 0; nIndexI < COLS ; nIndexI++) 
  {
    // declaration of analog pins as INPUTS   
    pinMode (nAnalogPinArray[nIndexI], INPUT);

    // initialize pad values
    nPadValuesArray[nIndexI] = nIndexI;
    nMappedPadValuesArray[nIndexI] = nIndexI;
  }

  // start serial communication at specified rate 
  Serial.begin(115200); 

  // join i2c bus
  Wire.begin(); 
}

////////////////////////////////////////////////////////////////////
// main function 
////////////////////////////////////////////////////////////////////
void loop()
{
  if (Serial.available() > 0)
  {
    // get input command byte 
    byInput = Serial.read();

    // convert 
    nInput = (int)byInput;
  }

  if (nInput == 0)
  {
    // no command sent
  }
  else
  {
    SendCase(byInput);
    nIRVal = RequestData();
    ReadSensors();
  }
}

////////////////////////////////////////////////////////////////////
// send ailment selection to slave 
////////////////////////////////////////////////////////////////////
void SendCase(byte byInput)
{
  // send request to slave for chosen ailment activation 
  Wire.beginTransmission(1);   // transmit to slave - device #1
  Wire.write(byInput);         // sends one byte 
  Wire.endTransmission();      // stop transmitting
  delay(10);   //500
}

////////////////////////////////////////////////////////////////////
// receive ailment IR selected from slave 
////////////////////////////////////////////////////////////////////
int RequestData()
{
  byte byIRVal = 0;
  Wire.requestFrom(1, 1);   // request 1 byte from slave - device #1
  byIRVal = Wire.read();    // receive byte 
  delay(10); //100
  return (int)byIRVal;
}

////////////////////////////////////////////////////////////////////
// read pad sensors and print them to serial 
////////////////////////////////////////////////////////////////////
void ReadSensors()
{
  Serial.print(nIRVal);
  Serial.print(' ');  
    
  for (nIndexI = 0; nIndexI < ROWS ; nIndexI++) 
  {  
    digitalWrite (nDigitalPinArray[nIndexI], HIGH); //turn each row on
    
    for (nIndexJ = 0; nIndexJ < COLS; nIndexJ++)
    {
      // obtain pad raw analog values for each row         
    
      nPadValuesArray[nIndexJ] = analogRead (nAnalogPinArray[nIndexJ]); 
   
      // map pad values from 255 to 0 (RGB scale)
      nMappedPadValuesArray[nIndexJ] = map (nPadValuesArray[nIndexJ], 0, 1023, 255, 0);  
      
      Serial.print(nMappedPadValuesArray[nIndexJ]);
      
      // check if it is the last row and column
      if ((nIndexI == ROWS - 1) && (nIndexJ == COLS - 1))
      {
        // do not print space
      }
      else
      {      
        Serial.print(' ');   
      }
    }
         
    digitalWrite (nDigitalPinArray[nIndexI], LOW); //turn each row off
  }
    
  // print a blank line to trigger serial event 
  Serial.println (); 
}

