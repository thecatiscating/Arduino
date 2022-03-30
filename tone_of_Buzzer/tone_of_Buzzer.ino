int myNumb;
int buzzPin = 8;
int ReadVal;
int j;
String msg = "Please Input the number";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(A3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

for (j =1; j<=100; j=j+1){
  digitalWrite(buzzPin, HIGH);
  delay(1);
  digitalWrite(buzzPin, LOW);
  delay(1);
}
for (j =1; j<=100; j=j+1){
  digitalWrite(buzzPin, HIGH);
  delay(2);
  digitalWrite(buzzPin, LOW);
  delay(2);
}
}
