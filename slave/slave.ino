#include <SPI.h>
#include <Dhcp.h>
#include <Dns.h>
#include <util.h>
#include <Wire.h>
#include <Servo.h>

// constant variables 
const int SERVOS = 12; // number of servos used 
const int BLADDERS = 12; 

// variable declarations
byte byInput = 0; // raw input command from Master
int nInput = 0;   // input command integer holding ailment & command selection (x0 -> x ailment # inactive or x1 -> x ailment # active)
int nLastInput = 0; // last input command sent by Master

byte byIRVal = 0; // raw IR value 
int nIRVal = 0;   // mapped ailment IR sensor value

Servo ServoArray[SERVOS]; // SERVO object array 

int nIndexI = 0; // general index 

int nServoInactive[SERVOS] = {175,175,175,175,175,175,175,175,175,175,175,175};  // active and inactive ailment angles for servos
int nServoActive[SERVOS] = {5,5,5,5,5,5,5,5,5,5,5,5};    

int nServoDigitalPinArray[SERVOS] = {22,24,26,28,30,32,34,36,38,40,42,44}; // digital servo pin array 
int nIRAnalogPinArray[SERVOS] = {15,14,13,12,11,10,7,6,5,4,3,2}; // analog IR pin array
int nSolDigitalPinArray[BLADDERS] = {23,25,27,29,31,33,35,37,39,41,43,45}; // digital solenoid pin array 

////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////
void setup()
{
  for (nIndexI = 0; nIndexI < BLADDERS ; nIndexI++) 
  {
    // declaration digital pins as OUTPUTS
    pinMode(nSolDigitalPinArray[nIndexI], OUTPUT); 
    
    digitalWrite (nSolDigitalPinArray[nIndexI], LOW); 
  } 
  
  // attach digital pins to servo objects 
  for (nIndexI = 0; nIndexI < SERVOS; nIndexI++)
  {
    pinMode(nServoDigitalPinArray[nIndexI], OUTPUT); 
     
    ServoArray[nIndexI].attach(nServoDigitalPinArray[nIndexI]);
  }
  
  // initialize servos to inactive angles
  for (nIndexI = 0; nIndexI < SERVOS; nIndexI++)
  {
    ServoArray[nIndexI].write(nServoInactive[nIndexI]);
  }
 
  Serial.begin(115200); 

  // master - slave communication events   
  Wire.begin(1);                  // join i2c bus with address #1
  Wire.onReceive(receiveEvent);   // register event
  Wire.onRequest(requestEvent);   // register event 
}

////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////
void loop()
{
  // master - slave communication delay 
  delay(100);
 
  requestEvent();
  if (Serial.available() > 0)
  {
    // get input command byte 
    byInput = Serial.read();

    // convert 
    nInput = (int)byInput;
  }

 // only active ailment or guarding when input from Master changes
 if (nLastInput != nInput)
 {
  nLastInput = nInput; 
  
  // ailment & guarding selection 
  switch (nInput)
  {
  //********** Reset All ************//
   case 1: 
    {
      // set servos to inactive angles
      for (nIndexI = 0; nIndexI < SERVOS; nIndexI++)
      {
        ServoArray[nIndexI].write(nServoInactive[nIndexI]);
      }
       
      // deactivate solenoids
      for (nIndexI = 0; nIndexI < BLADDERS; nIndexI++)
      {
        digitalWrite (nSolDigitalPinArray[nIndexI], LOW); 
      }
       
       break;
    } 
  
  //********** UGI ************//
   case 10: 
    {
      digitalWrite (nSolDigitalPinArray[0], HIGH); // activate solenoid 
      
      break;
    }
    
   case 11: 
    {
      ServoArray[0].write(nServoActive[0]); // set servo to active position
         
      break;
    }
   
   //********** Pancreas ************//
    case 20: 
    {
      digitalWrite (nSolDigitalPinArray[1], HIGH); // activate solenoid 
      
      break;
    }
    
   case 22: 
    {
      ServoArray[1].write(nServoActive[1]); // set servo to active position
           
      break;
    }
   
   //********** Gall Bladder ************//
   case 30: 
    {
      digitalWrite (nSolDigitalPinArray[2], HIGH); // activate solenoid 
           
      break;
    }
    
   case 33: 
    {
      ServoArray[2].write(nServoActive[2]); // set servo to active position
             
      break;
    }
   
   //********** Liver ************// -> no servo
   case 44: 
    {
      digitalWrite (nSolDigitalPinArray[3], HIGH); // activate solenoid 

      break;
    }
    
   //********** Aorta ************// -> no bladder
   case 55: 
    {
      ServoArray[4].write(nServoActive[4]); // set servo to active position
      
      break;
    }
    
   //********** Extra Top ************//
   case 60: 
    {
      digitalWrite (nSolDigitalPinArray[5], HIGH); // activate solenoid 
        
      break;
    }
    
   case 66: 
    {
      ServoArray[5].write(nServoActive[5]); // set servo to active position
          
      break;
    }
   
   //********** Appendix ************//
   case 70: 
    {
      digitalWrite (nSolDigitalPinArray[6], HIGH); // activate solenoid 
      
      break;
    }
    
   case 71: 
    {
      ServoArray[6].write(nServoActive[6]); // set servo to active position
       
      break;
    }
   
   //********** Right Ovary ************//
   case 80: 
    {
      digitalWrite (nSolDigitalPinArray[7], HIGH); // activate solenoid 
      
      break;
   }
    
   case 82: 
    {
      ServoArray[7].write(nServoActive[7]); // set servo to active position
           
      break;
    }
    
   //********** Bladder ************//
    case 90: 
    {
      digitalWrite (nSolDigitalPinArray[8], HIGH); // activate solenoid 
      
      break;
    }
    
   case 93: 
    {
      ServoArray[8].write(nServoActive[8]); // set servo to active position
         
      break;
    }
    
   //********** Left Ovary ************//
   case 100: 
    {
      digitalWrite (nSolDigitalPinArray[9], HIGH); // activate solenoid 
      
      break;
    }
    
   case 104: 
    {
      ServoArray[9].write(nServoActive[9]); // set servo to active position
         
      break;
    }
    
   //********** Diverticulitis ************//
    case 110: 
    {
      digitalWrite (nSolDigitalPinArray[10], HIGH); // activate solenoid 
      
      break;
    }
    
   case 115: 
    {
      ServoArray[10].write(nServoActive[10]); // set servo to active position

      break;
    }
   
   //********** Extra bottom ************//
   case 120: 
    {
      digitalWrite (nSolDigitalPinArray[11], HIGH); // activate solenoid 
     
      break;
    } 
    
   case 126: 
    {
      ServoArray[11].write(nServoActive[11]); // set servo to active position
        
      break;
    } 
  }
 }
}

////////////////////////////////////////////////////////////////////
// event received from master
////////////////////////////////////////////////////////////////////
void receiveEvent(int howMany)
{
  byInput = Wire.read();
  nInput = (int)byInput; 
}

////////////////////////////////////////////////////////////////////
// event request from master 
////////////////////////////////////////////////////////////////////
void requestEvent()
{
  // IR selection 
  switch (nInput)
  {
  //********** Reset All ************//
  case 1: 
    {
      byIRVal = 0; 
      Wire.write(byIRVal);
      
      break;
    } 
    
  //********** UGI ************//
  case 11: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[0]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal); 
      
      break;
    }
   
   //********** Pancreas ************//
   case 22: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[1]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);     
      
      break;
    }
   
   //********** Gall Bladder ************//
   case 33: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[2]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
   
   //********** Liver ************// -> no servo & no IR
   case 44: 
    {
      byIRVal = 0;
      Wire.write(byIRVal);
      
      break;
    }
    
   //********** Aorta ************// -> no bladder
   case 55: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[4]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);  
      
      break;
    }
    
   //********** Extra Top ************//
   case 66: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[5]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
   
   //********** Appendix ************//
   case 71: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[6]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
   
   //********** Right Ovary ************//
   case 82: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[7]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
    
   //********** Bladder ************//
   case 93: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[8]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
    
   //********** Left Ovary ************//
   case 104: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[9]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
    
   //********** Diverticulitis ************//
   case 115: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[10]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    }
   
   //********** Extra bottom ************//
   case 126: 
    {
      nIRVal = analogRead (nIRAnalogPinArray[11]);
      nIRVal = map(nIRVal, 0, 1023, 0, 255); // conversion to inches 
      byIRVal = (byte)nIRVal;
      Wire.write(byIRVal);
      
      break;
    } 
   }
}


