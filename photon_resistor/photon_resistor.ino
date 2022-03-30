int ReadVal;
float d;
int light = A3;
int bus = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(light, INPUT);
pinMode(bus,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ReadVal = analogRead(light);
Serial.println(d);
d = (9./1023.)*ReadVal + 1;

if (d != 10){
digitalWrite(bus, HIGH);
delay(d);
digitalWrite(bus, LOW);
delay(d);
}
}
