// by harsh HTG 
//code to control all the four bldc motors with the transmitter only trottle
//as we increase the trottle the speed of all the motors increases equally 

// motors are connected as 1 2 3 4 in clockwise fashion for x orientation

#include<Servo.h>
Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;

void setup() {
  // put your setup code here, to run once:
esc1.attach(8);
esc2.attach(9);
esc3.attach(10);
esc4.attach(11);

pinMode(3,INPUT);
esc1.writeMicroseconds(1000);
esc2.writeMicroseconds(1000);
esc3.writeMicroseconds(1000);
esc4.writeMicroseconds(1000);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val;
val=pulseIn(3,HIGH);
Serial.println(val);
//val=map(val,1300,1900,1000,2000);

esc1.writeMicroseconds(val);
esc2.writeMicroseconds(val);
esc3.writeMicroseconds(val);
esc4.writeMicroseconds(val);
}
