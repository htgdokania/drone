#include<Servo.h>
Servo esc;
void setup() {
// put your setup code here, to run once:
esc.attach(8);
pinMode(3,INPUT);
esc.writeMicroseconds(1000);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val;
val=pulseIn(3,HIGH);
val=map(val,1300,1800,1000,2000);
Serial.println(val);
esc.writeMicroseconds(val);
}
