String myColour;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("what is the colour to turn on");
while (Serial.available() == 0){
  
}
myColour = Serial.readString();

if (myColour=="red"){
  Serial.println("red is turned on");
  digitalWrite(13, HIGH);
  
 
}
if (myColour=="blue"){
  Serial.println("blue is turned on");
  digitalWrite(12, HIGH);
 
 
}
if (myColour=="yellow"){
  Serial.println("yellow is turned on");
  digitalWrite(11, HIGH);
  
}
}
