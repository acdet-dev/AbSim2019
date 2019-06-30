/*
  This example reads the output of an 16x16 matrix resistive sensor
 and sends its values serially. The Processing program at the bottom
 take those values and use them to change the background grey level of a 
 matrix on the screen.
 
The circuit:
Arduino digital outputs attached to 8 rows of sensor. 
Arduino analog inputs attached to 8 columns of sensor with 1.5k pull down resistors.

Sensor orientation: row 0, column 0 are the ones near the connectors.
     
 */
const int Cols = 12; //Define cols number ( 1 >= Cols >= 16 )
const int Rows = 12; //Define rows number 

//declaration of the INPUT pins we will use; i is the position within the array;
//i = 0 corresponds to output 2 (questo commento mi sembra errato ??!!??)
//si deve dichiarare tanti canali analogici quante sono le colonne dichiarate sopra.
int Pin[]= {A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15}; 

//si deve dichiarare tante line di IO digitali quante righe sono dichiarate sopra
//int dPin[] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53}; //declaration of the OUTPUT pins we will use; i is the position within the array; i = 0 corresponds to output 2
int dPin[] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39}; 	// Pins 22-37 used to supply current to sensor

int i = 0;
int j = 0;
int k = 0;
int n = 0;
int m = 0;

int sensorValue[Cols];
int msensorValue[Cols];

 
 // Define various ADC prescaler
const unsigned char PS_16 = (1 << ADPS2);
const unsigned char PS_32 = (1 << ADPS2) | (1 << ADPS0);
const unsigned char PS_64 = (1 << ADPS2) | (1 << ADPS1);
const unsigned char PS_128 = (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);


void setup() {
  
  for (int k = Rows-1; k >= 0 ; k--) {
pinMode(dPin[k], OUTPUT);             //declaration of pin[i] as an OUTPUT
}
Serial.begin(38400);
Serial.write('P');
Serial.write('P');
Serial.write('P');

for (j = 0; j >= Rows-1 ; j++) {
pinMode (Pin[i], INPUT);
}
//  Serial.begin(57600);   //turn serial on
//  Serial.begin(57600);   //turn serial on
//Serial.begin(38400);   //turn serial on

  // set up the ADC
  ADCSRA &= ~PS_128;  // remove bits set by Arduino library

  // you can choose a prescaler from above.
  // PS_16, PS_32, PS_64 or PS_128
  ADCSRA |= PS_32;    // set our own prescaler to 32 

}

void loop(){
  
//Send start pattern
Serial.write( B10101010); //AA
Serial.write( B01010101); //55

for (int i = Rows-1; i >= 0 ; i--) { 
                                  
  digitalWrite (dPin[i], HIGH); //turn row i on 
  
  for (int m = Cols-1; m >= 0 ; m--) {
    sensorValue[m] = analogRead (Pin[m]); //read value column m
    // delay(1);
    if (sensorValue[m] < 5) {   // this is to eliminate noise
      sensorValue[m] = 0;  
    }

    msensorValue[m] = map (sensorValue[m], 0, 1024, 0, 255);    //map all values read to a new range from 255 to 0
    
//  Serial.print(msensorValue[m]);   //print first value on the serial port
    Serial.write(msensorValue[m]);
  }
  digitalWrite (dPin[i], LOW); //turn row i off
}
//Send end frame pattern
Serial.write( B11110000); //F0
Serial.write( B00001111); //0F

//Serial.println ();   //print a blank line - this line is important because Processing will start a serial event only after reading this blank line. 
}




/* 


Sensor orientation: corner 0,0 top left
 
// Number of columns and rows in the grid
int cols = 8;
int rows = 8;
 
// Declare 2D array
float[] myArray = new float[cols*rows];
 

 import processing.serial.*;
 
 
 Serial myPort;
 
 void setup() {
 size(720, 720);
 
 
 // List all the available serial ports
 println(Serial.list());
 // I know that the first port in the serial list on my mac
 // is always my  Arduino, so I open Serial.list()[0].
 // Open whatever port is the one you're using.
 myPort = new Serial(this, Serial.list()[5], 9600);
 // don't generate a serialEvent() unless you get a newline character:
 myPort.bufferUntil('\n');
 }
 
 void draw() {
 
 }
 
 void serialEvent(Serial myPort) { 
 // get the ASCII string:
 String inString = myPort.readStringUntil('\n');
 
 if (inString != null) {
 // trim off any whitespace:
 inString = trim(inString);
 // split the string on the commas and convert the 
 // resulting substrings into an integer array:
 float[] myArray = float(split(inString, ","));
 // if the array has at least three elements, you know
 // you got the whole thing.  Put the numbers in the
 // color variables:
 println("Arrivato");
 if (myArray.length >=64) {
 
    for (int i = 0; i < cols; i++) {
      for (int j = 0; j < rows; j++) {
        stroke(255);
        println("valori i=" + i + " j="+ j + "val=" + int(myArray[(i*rows)+j]));
        fill(int(myArray[(i*rows)+j]));
        rect(i*90,j*90,90,90); 
       }
    }
 
 }
 }
 }
*/

