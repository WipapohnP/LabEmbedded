#include <Arduino.h>
  int SEG_A = 2;
  int SEG_B = 3;
  int SEG_C = 4;
  int SEG_D = 5;
  int SEG_E = 6;
  int SEG_F = 7;
  int SEG_G = 8;
  int SEG_DP = 9;
  int COM_D4 = 10;
  int COM_D3 = 11;
  int COM_D2 = 12;
  int COM_D1 = 13;
  int COM_LDOT = 0;
    
void setup() {
  // put your setup code here, to run once:
// Segment:
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  pinMode(SEG_DP, OUTPUT);
  // Digit Common
  pinMode(COM_D1, OUTPUT);
  pinMode(COM_D2, OUTPUT);
  pinMode(COM_D3, OUTPUT);
  pinMode(COM_D4, OUTPUT);
  pinMode(COM_LDOT, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, LOW);
  digitalWrite(COM_D1, HIGH);
  delay(250);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(COM_D2, HIGH);
  delay(250);
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(COM_D3, HIGH);
  delay(250);
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(COM_D4, HIGH);
  delay(250);
}
