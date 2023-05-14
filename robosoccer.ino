#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define IN1 D8
#define IN2 D7
#define IN3 D4
#define IN4 D0
#define ENA D1
#define ENB D2
#define FL1 D5
#define FL2 D6

int x = 50;
int y = 50;
int flap;
char auth[] = "meGP4odYohUjE-um1sG8QWJ3Df2URFzX"; //Enter your Blynk auth token
char ssid[] = "Anubhab"; //Enter your WIFI name
char pass[] = "veryverygood"; //Enter your WIFI passowrd


void setup() {
  Serial.begin(9600);
  pinMode(FL1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(FL2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  digitalWrite(FL1, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(FL2, LOW);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}
BLYNK_WRITE(V0) {
  x = param[0].asInt();
}
BLYNK_WRITE(V1) {
  y = param[0].asInt();
}
BLYNK_WRITE(V2) {
  flap = param[0].asInt();
}
void smartcar() {
  if (y > 65 && x<65 && x>35) {
    carForward();
    Serial.println("carForward");
  } else if (y < 35 && x<65 && x>35) {
    carBackward();
    Serial.println("carBackward");
  } else if (x < 35 && y<65 && y>35) {
    carLeft();
    Serial.println("carLeft");
  } else if (x > 65 && y<65 && y>35) {
    carRight();
    Serial.println("carRight");
  } else if (x < 65 && x > 35 && y < 65 && y > 35) {
    carStop();
    Serial.println("carstop");
  } else if(x>65 && y>65){
    carRForward();
    Serial.println("diagrf");
  } else if(x<35 && y>65){
    carLForward();
    Serial.println("diaglf");
  } else if(x>65 && y<35){
    carRBackward();
    Serial.println("diagrb");
  } else if(x< 35 && y<35){
    carLBackward();
    Serial.println("diaglb");
  }
}
void flap_run(){
  if (flap==1){
    digitalWrite(FL2, HIGH);
    digitalWrite(FL1, LOW);
  }
  else{
    digitalWrite(FL1, LOW);
    digitalWrite(FL2, LOW);
  }
}
void loop() {
  Blynk.run();// Run the blynk function
  smartcar();// Call the main function
  flap_run();//shoot it
}
void carBackward() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void carForward() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255); 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
void carLeft() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void carRight() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
void carStop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void carRForward(){
  analogWrite(ENA, 255);
  analogWrite(ENB, 100);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);   
}
void carRBackward(){
  analogWrite(ENA, 255);
  analogWrite(ENB, 100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);  
}
void carLForward(){
  analogWrite(ENA, 100);
  analogWrite(ENB, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);  
}
void carLBackward(){
  analogWrite(ENA, 100);
  analogWrite(ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);  
}