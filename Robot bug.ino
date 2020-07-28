int initialangle=60;
#include<Servo.h>
Servo leftleg,rightleg,forbevel;
int theta1=90,theta2=90,theta3=90,theta4=30;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  leftleg.attach(10);
  rightleg.attach(8);
  forbevel.attach(9);

}

void loop() {
    forbevel.write(intialangle);
    leftleg.write(initialangle);
    rightleg.write(initialangle);


 while(Serial.available()==0)
  {}
  char k= Serial.read();
  Serial.println(k);
    if(k=='1')
    {
        motorplus(forbevel,theta1);     
        motor2plus(leftleg,rightleg,theta2);
        motorminus(forbevel,theta1);
        motor2minus(leftleg,rightleg,theta2);
        
    }
    else if(k=='3')
  {
        motorplus(forbevel,theta1);
        motorplus(leftleg,theta2);
        motorminus(forbevel,theta1);
        motorminus(leftleg,theta2);
  }
  else if(k=='4')
  {
        motorplus(forbevel,theta1);
        motorplus(rightleg,theta2);
        motorminus(forbevel,theta1);
        motorminus(rightleg,theta2);
  }
  Serial.println(k);
 }
 void motorplus(Servo& s,int theta)
 {
    for(int i=0;i<theta;i++)
    {
      s.write(i);
      delay(50);
    }
    delay(1000);
 }
 void motorminus(Servo& s, int theta)
 {
  for(int i=theta;i>0;i--)
  {
    s.write(i);
    delay(50);
  }
  delay(1000);
 }
 void motor2plus(Servo& s1,Servo& s2,int theta)
 {
  for(int i=0;i<theta;i++)
  {
    s1.write(i);
    delay(1);
    s2.write(i);
    delay(50);
  }
  delay(1000);
 }
  void motor2minus(Servo& s1,Servo& s2,int theta)
 {
  for(int i=theta;i>0;i--)
  {
    s1.write(i);
    delay(1);
    s2.write(i);
    delay(50);
  }
  delay(1000);
 }
