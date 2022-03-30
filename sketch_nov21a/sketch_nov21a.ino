int readPin = A3;
int p = 13 ;
int V2;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(p ,OUTPUT);
  pinMode(readPin,INPUT);
  V2 = analogRead(readPin);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(p, 0);
 delay(1000);
 analogWrite(p, 250);


  if (V2 <= 450) {
    Serial.println("It is bright!");
    delay(1000);
  }
  else {
    Serial.println("Nope");
    delay(1000);
  }
}
