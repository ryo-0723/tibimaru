#include<Servo.h>
Servo ude;
void setup() {
ude.attach(10);
}

//void loop() {
//ude.write(40);
//delay(1000);
//ude.write(90);
//delay(1000);
//}
//void loop(){                 //腕振り用
//  for(int i=40;i<90;i++){
//    ude.write(i);
//    delay(14);
//  }
//  for(int i=90;i>40;--i){
//    ude.write(i);
//    delay(14);
//  }
//}
void loop(){               //旗振り用
  for(int i=70;i<165;i++){
    ude.write(i);
    delay(15);
  }
  for(int i=165;i<70;--i){
    ude.write(i);
    delay(20);
  }
}
