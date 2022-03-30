#include <Servo.h>
Servo arm1;
Servo arm2;
int Xs = A5;
int Ys = A4;
int Btn = 13;
int Xval;
int Yval;
int Bval;
float Xval1;
float Yval1;
int Bval1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xs, INPUT);
  pinMode(Ys, INPUT);
  pinMode(Btn, INPUT);
  digitalWrite(Btn, HIGH);
  arm1.attach(8);
  arm2.attach(9);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  Xval= analogRead(Xs);
  Yval= analogRead(Ys);
  Bval= digitalRead(Btn);
  Xval1 = (180./1023.)*Xval;
  Yval1 = (180./1023.)*Yval;
  Bval1 = Bval;
  
  arm1.write(Xval1);
  arm2.write(Yval1);
  if(Bval1==0){
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12,LOW);
  
  }
  
  Serial.print(" X Value = ");
  Serial.print(Xval );
  Serial.print(" Y Value = ");
  Serial.print(Yval );
  Serial.print(" Switch State is ");
  Serial.println(Bval );
  
  
}
