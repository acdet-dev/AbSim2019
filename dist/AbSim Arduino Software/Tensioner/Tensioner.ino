
#include <EEPROM.h>

int target_tension = 300;


#define StepDirPin 5
#define StepDec LOW
#define StepInc HIGH
int StepDir = StepInc;

#define StepPin 2
int Step;
int StepRate = 800;

#define EnablePin 8

int statstate = 0;

void setup()
{
  Serial.begin(38400);
  // Tensioner HardwareVersion SoftwareVersion
  Serial.println("Tensioner");

  pinMode(EnablePin, OUTPUT);
  digitalWrite(EnablePin, LOW);

  pinMode(StepDirPin, OUTPUT);
  pinMode(StepPin, OUTPUT);
  
  digitalWrite(StepDirPin, StepDir);
  digitalWrite(StepPin, LOW);

  digitalWrite(EnablePin, HIGH);
  
  EEPROM.get(0, target_tension);
}

void stepdirchg(int dir)
{
  int i;
  
  if(StepDir != dir)
  {
    StepDir = dir;
    digitalWrite(StepDirPin, StepDir);
  }
}

int enabled = 1;
int lastdir = StepDir;

void loop()
{
  int c;
  int actual_tension = 0;
  int idle = 0;
  int dir, dif;

  if(Serial.available() > 0)
  {
    c = Serial.read();
    //Serial.println(c);
    
    if(c == 'R' || c == 'r')
       Serial.println('t');
       
    if(c == 'S' || c == 's')
       statstate = (statstate) ? 0: 1;
       
    if(c == '>' || c == '.')
    {
      //Serial.println("Inc");
      enabled = 1;
      lastdir = StepInc;
      stepdirchg(StepInc);
      target_tension = target_tension + 10;
    }
    
    if(c == '<' || c == ',')
    {
      //Serial.println("Dec");
      enabled = 1;
      lastdir = StepDec;
      stepdirchg(StepDec);
      target_tension = target_tension - 10;
    }
    
    if(c == 'e' || c == 'E') enabled = 1;
    
    if(c == 'd' || c == 'D') enabled = 0;
    
    if(c == 'p' || c == 'P') EEPROM.put(0, target_tension);
    
  }
  
  actual_tension = loadcell();
  //actual_tension = analogRead(A0);
  
  if(enabled) {
    //if(actual_tension < target_tension-10) { stepdirchg(StepInc); step(); }
    //if(actual_tension > target_tension+10) { stepdirchg(StepDec); step(); }
    
    //if(actual_tension < target_tension) dir = StepInc;
    //if(actual_tension > target_tension) dir = StepDec;
    
    dif = actual_tension - target_tension;
    dir = (dif < 0)? StepInc: StepDec;
    
    //StepRate = abs(dif)*abs(dif);
    
    if(dir == lastdir)
       step();
    else if(abs(dif) > 20)
    {
       delay(10);
       stepdirchg(dir);
       step();
       lastdir = dir;
    }
    else
    {
       idle = 1; 
    }
    
    //delay(1);
  }
  else 
  {
    idle = 1;
  }


  if(statstate)
  {
    //actual_tension = loadcell();
    Serial.print("Movement State: ");
    Serial.print(idle ? "Idle" : "Moving");
    Serial.print(", Target Tension: ");
    Serial.print(target_tension);
    Serial.print(", Actual Tension: ");
    Serial.println(actual_tension);
    statstate = 0;
  }
}

#define fl 50
int filter[fl];
int filter_idx = 0;

int loadcell()
{
  int i = 0;
  long faccu = 0;

  filter[filter_idx] = analogRead(A0);
  filter_idx = ++filter_idx % fl;
  
  for(i=0;i<fl;i++)
  {
    faccu += filter[i];
    //Serial.print(filter[i]); Serial.print(", ");
  }
  //Serial.println();
  faccu /= fl;
  return (int)faccu;
}

void step10()
{
 int i;
 for(i=0;i<100;i++) step(); 
}

void step()
{
  int dus;
  
  if(StepRate == 0) return;
  if(StepRate > 1000) StepRate = 1000;

  dus = 1004 - StepRate;
  
  digitalWrite(StepPin, HIGH);
  delayMicroseconds(dus);
  digitalWrite(StepPin,LOW);
  delayMicroseconds(dus);
}

