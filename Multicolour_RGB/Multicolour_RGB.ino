String mycolour;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What colour do you want :");
while (Serial.available() == 0){
  
}
mycolour = Serial.readString();
if (mycolour=="red"){
  Serial.println("colour is red");
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
if (mycolour=="blue"){
  Serial.println("colour is blue");
  
  digitalWrite(10, HIGH);
}
if (mycolour=="off"){
  Serial.println("colour is none");
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
}
