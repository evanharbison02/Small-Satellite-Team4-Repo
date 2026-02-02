/*
Small Sat Group 4
Authors: Maverick Bray
*/

//value of pins are placeholders
// Air Core Pins
const int airCorePin1=1;
const int airCorePin2=2;
//Solid Core 1 Pins
const int solidCore1Pin1=3;
const int solidCore1Pin2=4;
//Solid Core 2 Pins
const int solidCore2Pin1=5;
const int solidCore2Pin2=6;

void setup() {
pinMode(airCorePin1, OUTPUT);  
pinMode(airCorePin2, OUTPUT);
pinMode(solidCore1Pin1, OUTPUT);
pinMode(solidCore1Pin2, OUTPUT);
pinMode(solidCore2Pin1, OUTPUT);
pinMode(solidCore2Pin2, OUTPUT);  
Serial.begin(115200);
}
//pitch refers to the x-axis. The way you want the direction to go (ex. forward tilt or backwords tilt) is decide by the int paramater 
void pitch(int direction, int time){

  if(direction !=1 && direction !=2){
    Serial.out("Invalid direction Entered please try again");
    return; 
  }

  if(direction == 1){
    Serial.out("Direction = 1, air core pin1 running");
    digitalWrite(airCorePin1,HIGH);
    delay(time);
    digitalWrite(airCorePin1, LOW);
  }
  if(direction == 0){
    Serial.out("Direction = 0, air core pin2 running");
    digitalWrite(airCorePin2,HIGH);
    delay(time);
    digitalWrite(airCorePin2, LOW);
  }

}
// yaw refers to the y-axis
void yaw(int direction, int time) {

  if(direction !=1 && direction !=2){
     Serial.out("Invalid direction Entered please try again");
    return; 
  }

  if(direction == 1){
    Serial.out("Direction = 1, soild core1 pin1 running");
    digitalWrite(solidCore1Pin1,HIGH);
    delay(time);
    digitalWrite(solidCore1Pin1, LOW);
  }
  if(direction == 0){
    Serial.out("Direction = 0, soild core1 pin2 running");
    digitalWrite(solidCore1Pin2,HIGH);
    delay(time);
    digitalWrite(solidCore1Pin2, LOW);
  }

}
// roll refer to the z-axis
void roll(int direction,int time){

  if(direction !=1 && direction !=2){
     Serial.out("Invalid direction Entered please try again");
    return; 
  }
  
  if(direction == 1){
    Serial.out("Direction = 1, soild core2 pin1 running");
    digitalWrite(solidCore2Pin1,HIGH);
    delay(time);
    digitalWrite(solidCore2Pin1, LOW);
  }
  if(direction == 0){
    Serial.out("Direction = 0, soild core2 pin2 running");
    digitalWrite(solidCore2Pin2,HIGH);
    delay(time);
    digitalWrite(solidCore2Pin2, LOW);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  //below is test code
pitch(1,1000);
yaw(1,1000);
roll(1,1000);
}
