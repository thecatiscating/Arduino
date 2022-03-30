#include <Stepper.h>
int rev = 2048;
int d = 500;
int readi;
int readd;
int newreadi = 0;
int newreadd = 0;
int buttoni = 12;
int buttond = 13;
Stepper mymotor (rev, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mymotor.setSpeed(15);
pinMode(buttoni, INPUT);
digitalWrite(buttoni, HIGH);
pinMode(buttond, INPUT);
digitalWrite(buttond, HIGH);
}

void loop() {
  readi = digitalRead(buttoni);
  readd = digitalRead(buttond);
  
  Serial.println(readi);
  Serial.print( readd);
  // put your main code here, to run repeatedly:
if (readi == 0 && newreadi == 0  ){
  rev=rev*(1);
  mymotor.step(rev);
  newreadi == 0;
}
if(readd == 0 && newreadd == 0){
  
  mymotor.step(-rev);
  newreadd == 0;
}
}
