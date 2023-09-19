#include <SoftwareSerial.h>
#define trig 9
#define echo 10

SoftwareSerial BTserial(2, 4);  //RX, TX

void setup() {
  pinMode(13, OUTPUT);      // set pin 13 as OUTPUT
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT) ;
  BTserial.begin(9600);    
}

void loop() {

  digitalWrite(13,HIGH) ;     // power indicating LED
  digitalWrite(trig, LOW) ;
  delayMicroseconds(2) ;
  digitalWrite(trig, HIGH) ;
  delayMicroseconds(10) ;
  digitalWrite(trig, LOW) ;

  long time = pulseIn(echo, HIGH) ;  // calculate the time taken by ultrasonic wave 

  float d = time / 58 ;    // calculate the distance

  BTserial.print(d);    // output the calculated distance
  BTserial.println() ;
  delay(1500);

}
