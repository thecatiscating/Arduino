
float radius;
float area;
float pi = 3.14;
String msg = ("Please enter the area of your circle : ");
String msg2 = "radius is ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);

while (Serial.available() == 0){
 
} 


area = Serial.parseFloat (); 
radius = sqrt(area/pi);
Serial.print(msg2);
Serial.println(radius);







}
