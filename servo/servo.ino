#include<Servo.h>
int buttoni = 12;
int buttond = 13;
int servop = 9;
int servoturn;
int servopos;
int Buttonreadi;
int Buttonreadd ; 
int j;
int z;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servop);
pinMode(buttoni, INPUT);
pinMode(buttond, INPUT);
myServo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
Buttonreadi = digitalRead(buttoni);
Buttonreadd = digitalRead(buttond);


if (Buttonreadi == 0){
 
  servoturn = (servoturn + 10);
  }
 
  

if (Buttonreadd == 0){
  
  servoturn = (servoturn - 10);
  }
  


myServo.write(servoturn);
}
