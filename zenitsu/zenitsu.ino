#include <IRremote.h>
int rev = 9;
IRrecv irrecv(rev);
decode_results results;
void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(rev, INPUT);
irrecv.enableIRIn();

}

void loop() {
  // put your main code here, to run repeatedly:
int o=0;
   if (irrecv.decode(&results)) {
   
   unknownRemoter();
      
     irrecv.resume(); // Receive the next value
    
   }   

}




void unknownRemoter(){                       //this function is from an old remoter see video.
long RED_LED_OFF = 0xFF40BF;
long RED_LED_ON =  0xFF906F;
long LAST_BUTTON = 0xFFD02F;

if (results.value == RED_LED_OFF){
      for (int z =0; z<50; z+=1){
analogWrite(3, 255);
delay(100);
analogWrite(3, 0);
delay(100);
}
      }
     else if (results.value == RED_LED_ON )
      {
       analogWrite(3, 0);
      }
     else if (results.value == LAST_BUTTON )
      {
       for (int y =0; y<3; y+=1){
for (int i=0; i<255; i+=15){
  analogWrite(3, i);
  delay(100);
}
for (int u=255; u>0; u-=15){
  analogWrite(3, u);
  delay(100);
}
}
      }else{
         for (int y =0; y<3; y+=1){
for (int i=0; i<255; i+=15){
  analogWrite(3, i);
  delay(100);
}
for (int u=255; u>0; u-=15){
  analogWrite(3, u);
  delay(100);
}
}
for (int z =0; z<50; z+=1){
analogWrite(3, 255);
delay(100);
analogWrite(3, 0);
delay(100);
}
        }
}
