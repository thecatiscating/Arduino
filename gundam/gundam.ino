int V2 = "A3";
float RV ;
int RV2;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(V2, INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
RV = analogRead(V2);

Serial.println(RV);


}
