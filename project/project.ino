
int safep = 13;
int unsafep = 12;
float V1;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);


pinMode(unsafep, OUTPUT);
pinMode(safep, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
V1 = (255./1023.)* analogRead(A3);

Serial.println(V1);

if ( V1 >= 200  ){
  analogWrite(unsafep, 255);
  Serial.println("It is unsafe");
  delay(250);
 analogWrite(unsafep, 0);
 delay(250);
}

else if ( V1  <= 100){
  analogWrite(safep,255);
  Serial.println(" It is too low ");
  delay(250);
 analogWrite(safep, 0);
 delay(250);
}

else{
  Serial.println("It is safe");
  delay(250);
  }
}
