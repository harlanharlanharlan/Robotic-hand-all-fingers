#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
int pos5 = 0;

void setup() {

  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);

  Serial.begin(9600);
}

void loop() {

  pos1 = analogRead(A1);
  pos2 = analogRead(A2);
  pos3 = analogRead(A3);
  pos4 = analogRead(A4);
  pos5 = analogRead(A5);



  pos1 = map(pos1, 540, 770, 0, 180);
  pos2 = map(pos2, 540, 770, 0, 180);
  pos3 = map(pos3, 540, 770, 0, 180);
  pos4 = map(pos4, 540, 770, 0, 180);
  pos5 = map(pos5, 540, 770, 0, 180);

  if (pos1 < 30) pos1 = 0;
  if (pos2 < 30) pos2 = 0;
  if (pos3 < 30) pos3 = 0;
  if (pos4 < 30) pos4 = 0;
  if (pos5 < 30) pos5 = 0;

  Serial.println(pos1);
  Serial.println(pos2);
  Serial.println(pos3);
  Serial.println(pos4);
  Serial.println(pos5);

  myservo1.write(pos1);
  myservo2.write(pos2);
  myservo3.write(pos3);
  myservo4.write(pos4);
  myservo5.write(pos5);

  delay(100);
}
