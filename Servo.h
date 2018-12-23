#include <Servo.h> 

Servo myservo; 

                

int pos = 0;    

const int sensorMin = 0;      

const int sensorMax = 1023;   



void setup() {

Serial.begin(9600);  

myservo.attach(9);

}



void loop() {

  

int sensorReading = analogRead(A0);

Serial.println(sensorReading);

int pos = map(sensorReading, sensorMin, sensorMax, 0, 180);

myservo.write(pos);

delay(15);

  

}