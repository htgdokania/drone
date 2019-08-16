void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(10,OUTPUT);
//pinMode(A1,INPUT);
//pinMode(A2,INPUT);
//pinMode(A3,INPUT);
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
Serial.println(pulseIn(3,HIGH));
analogWrite(10,1400);
delay(20);
}
