int myNumb;
int buzzPin = 8;
int ReadVal;
String msg = "Please Input the number";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(A3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:



ReadVal = analogRead(A3);
Serial.println(ReadVal);

while (ReadVal>900){
  digitalWrite(buzzPin, HIGH);
  ReadVal = analogRead(A3);
  Serial.println(ReadVal);
 
}
digitalWrite(buzzPin, LOW);
}
