int LeftMotorForward = 10; // Pin 10 has Left Motor connected on Arduino boards.
int LeftMotorReverse = 9; // Pin 9 has Left Motor connected on Arduino boards.

int RightMotorForward = 12; // Pin 12 has Right Motor connected on Arduino boards.
int RightMotorReverse = 13; // Pin 13 has Right Motor connected on Arduino boards.

//-----------------------------------------------------------------------------  
void setup()
{
  pinMode(LeftMotorForward, OUTPUT);  // initialize the  pin as an output.
  pinMode(RightMotorForward, OUTPUT);  // initialize the  pin as an output.
  pinMode(LeftMotorReverse, OUTPUT);  // initialize the  pin as an output.
  pinMode(RightMotorReverse, OUTPUT);  // initialize the  pin as an output.
}
//-----------------------------------------------------------------------------  

// The following Loop is to make the Robot go staright
void loop()
{
   void Driveforward();
  
   digitalWrite(RightMotorForward, HIGH);   // turn the Right Motor ON
   digitalWrite(LeftMotorForward, HIGH);   // turn the Left Motor ON
   delay(10000);               // wait for  10 seconds
 
   digitalWrite(RightMotorForward,LOW);   // turn the Right Motor OFF
   digitalWrite(LeftMotorForward, LOW);   // turn the Left Motor OFF
   delay(10000);               // wait for  10 seconds
//-----------------------------------------------------------------------------  
   void Rightturn();
  
   digitalWrite(RightMotorForward, LOW);   // turn the Right Motor OFF
   digitalWrite(LeftMotorForward, HIGH);   // turn the Left Motor ON
   delay(10000);               // wait for  10 seconds
 
   digitalWrite(RightMotorForward,LOW);   // turn the Right Motor OFF
   digitalWrite(LeftMotorForward, LOW);   // turn the Left Motor OFF
   delay(10000);               // wait for 10 seconds
//-----------------------------------------------------------------------------  
   void Leftturn();
  
   digitalWrite(RightMotorForward, HIGH);   // turn the Right Motor ON
   digitalWrite(LeftMotorForward, LOW);   // turn the Left Motor OFF
   delay(10000);               // wait for  10 seconds
 
   digitalWrite(RightMotorForward,LOW);   // turn the Right Motor OFF
   digitalWrite(LeftMotorForward, LOW);   // turn the Left Motor OFF
   delay(10000);   // wait for  10 seconds
//-----------------------------------------------------------------------------  
   void Reverse();
  
   digitalWrite(RightMotorReverse, HIGH);   // turn the Right Motor ON
   digitalWrite(LeftMotorReverse, HIGH);   // turn the Left Motor ON
   delay(10000);               // wait for a 10 seconds
 
   digitalWrite(RightMotorReverse, LOW);   // turn the Right Motor ON
   digitalWrite(LeftMotorReverse, LOW);   // turn the Left Motor ON
   delay(10000);               // wait for a 10 seconds
//----------------------------------------------------------------------------- 

   void Allstop();
  
   digitalWrite(RightMotorReverse, LOW);   // turn the Right Motor ON
   digitalWrite(LeftMotorReverse, LOW);   // turn the Left Motor ON
   delay(10000);               // wait for  10 seconds
  
   digitalWrite(RightMotorForward,LOW);   // turn the Right Motor OFF
   digitalWrite(LeftMotorForward, LOW);   // turn the Left Motor OFF
   delay(10000);    // wait for  10 seconds
//----------------------------------------------------------------------------- 
}
