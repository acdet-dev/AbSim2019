


// The Relay Board is a shield designed for Arduino Mega 2560 
// The Relay Board can control 10 air devices where each device has two independent controls (D22-D41.
// This allows turning on an air supply control to add pressure, turn off to hold, turn on an exhaust control to evacuate.
// It also provides 10 low pressure (0-1.45 psi) sensors and two high pressure (0-14.5 psi) sensors (A0-A11).
// This allow monitoring of pressures in each air device.

// 6/21/15 sjf added individual maxpsi pressures for each bladder as
//             array maxpsia[7] with init default to maxpsi setting and
//             individual overides for each bladder.

float minpsi = 0.05;
float maxpsi = 0.15;

float maxpsia[7];

float spring = 7.0;
float pushbk = 14.25;

int state[10];
byte tmr = 0, aa = 0;

void setup() 
{
  int i;

  Serial.begin(38400);
 
  for(i=0;i<10;i++) state[i] = 0;
  
  for(i = 22; i < 42 ; i++) 
  {
    pinMode(i, OUTPUT); 
    digitalWrite(i, LOW); 
  }
  
  //for(i = 22; i < 42 ; i++) 
  //{
    //digitalWrite(i, HIGH);
    //delay(250);
    //digitalWrite(i, LOW); 
  //}

  for(i=0;i<7;i++)
    maxpsia[i] = maxpsi;

  //maxpsia[0] = 0.20; // ruq
  //maxpsia[1] = 0.20; // rlq
  //maxpsia[2] = 0.20; // luq
  //maxpsia[3] = 0.35; // llq
 
  maxpsia[4] = 0.80; // liver
  maxpsia[5] = 0.90; // spleen
  maxpsia[6] = 0.70; // bladder

  Serial.println("Bladders Ready");
}

void loop ()
{
  int i;
  int serialData = 1;
  byte byteData;
  
  if(Serial.available() > 0)
  {
    byteData = Serial.read();
    
    serialData = (char)byteData;
    if(serialData)
    {
      parseCommand(toupper(serialData));
    }
  }
  
  for(i=0;i<7;i++)
  {
    if(state[i] == 1)
    {
      digitalWrite(i*2+23, LOW);
      if(MPX5010_psi(i) < maxpsia[i]+0.01) digitalWrite(i*2+22, HIGH);
      else if(MPX5010_psi(i) > maxpsia[i]-0.3) digitalWrite(i*2+22, LOW);
      //Serial.println(MPX5010_psi(i));
    }
    
    if(state[i] == 0)
    {
      digitalWrite(i*2+22, LOW);
      if(MPX5010_psi(i) > minpsi) digitalWrite(i*2+23, HIGH);
      else digitalWrite(i*2+23, LOW);
    }
      
  }
/*
  //exhaust 
  digitalWrite(37, LOW);
  if(MPX5100_psi(10) < spring) digitalWrite(36, HIGH);
  else digitalWrite(36, LOW);
  //Serial.println(MPX5100_psi(11));
  
  //exhaust 
  digitalWrite(39, LOW);
  if(MPX5100_psi(11) < pushbk) digitalWrite(38, HIGH);
  else digitalWrite(38, LOW);
  //Serial.println(MPX5100_psi(11));
  */
  
  // aortic anyrisum
  
  tmr++;
  if(aa && (tmr % 20) == 0) {
    //Serial.println("aa");
    tmr = 0;
    //digitalWrite(9*2+23, LOW);
    digitalWrite(9*2+22, HIGH);
    delay(200);
  }
  else {
    //Serial.println("no aa");
    digitalWrite(9*2+22, LOW);
    //digitalWrite(9*2+23, HIGH);
  }

  delay(50);
}

void parseCommand(char serialData)
{
  int i;
  
  if (serialData == 'R')
  {
    // Command: "Are you there?" or "Who are you?"
    // Reply with a 'B', for bladder control
    // sjf 1/8/2015 maybe use Gerble Status Request code sequence so it's the same on all arduino devices
    
    Serial.print('B');
  }
  else if (serialData == 'S')
  {
    // Command: Status
    status();
  }
  else if (serialData == 'P')
  {
    // Command: Pushback
    // Maybe grab a second byte from serial to get the pushback value?
    digitalWrite(40, HIGH);
    delay(500);
    digitalWrite(40, LOW);
    digitalWrite(41, HIGH);
    delay(900);
    digitalWrite(41, LOW);
  }
  else if(serialData=='0')
  {
    // Command: Clear
    // Deflate all bladders to default
    for(i=0;i<10;i++) state[i] = 0;
  }
  else if (serialData == '1')
  {
    // Command: RUQ
    state[0] = 1;

  }
  else if (serialData == '2')
  {
    // Command: RLQ
    state[1] = 1;
  }
  else if (serialData == '3')
  {
    // Command: LUQ
    state[2] = 1;
  }
  else if (serialData == '4')
  {
    // Command: LLQ
    state[3] = 1;
  }
  else if (serialData == '5')
  {
    // Command: Liver
    state[4] = 1;
  }
  else if (serialData == '6')
  {
    // Command: Spleen
    state[5] = 1;
  }
  else if (serialData == '7')
  {
    // Command: Enlarged Urinary Bladder
    state[6] = 1;
  }
  else if(serialData == '8')
  {
    // Command: Aortic Anyrsim
    aa = (aa == 0)? aa = 1: aa = 0;
  }
}

float MPX5010_psi(int sensorID)
{
  return(((analogRead(sensorID) / 1024.0) - 0.04) / 0.09 * 0.14503773773020923);
}

float MPX5100_psi(int sensorID)
{
  return(((analogRead(sensorID) / 1024.0) - 0.04) / 0.009 * 0.14503773773020923);
}

void status()
{
  int i;
 
  for(i=0;i<10;i++)
  {
    Serial.print('A');
    Serial.print(i);
    Serial.print(": ");
    Serial.print(MPX5010_psi(i));
    Serial.print(", ");
  } 
    Serial.print("A10");
    Serial.print(": ");
    Serial.print(MPX5100_psi(10));
    Serial.print(", ");
    
    Serial.print("A11");
    Serial.print(": ");
    Serial.print(MPX5100_psi(11));
    
    Serial.println();
}

void statusx()
{
  int i;
  
  //delay(50);

  Serial.print("Bladder(A0)");
  Serial.print(": ");
  Serial.print(MPX5010_psi(0));
  Serial.print(", ");
  
  Serial.print("Bladder (A10)");
  Serial.print(": ");
  Serial.print(MPX5100_psi(10));
  Serial.print(", ");
  
  Serial.print("Regulated (A11)");
  Serial.print(": ");
  Serial.print(MPX5100_psi(11));
  Serial.print(", ");

  Serial.println("");

}




