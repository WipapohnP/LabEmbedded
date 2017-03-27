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

int colum[] = {1, 2, 4, 8};
int bufferr[] = { 1, 2, 3, 4 };
int i = 0;

char seg[] =
{
  0b11111100, // 0
  0b01100000, // 1
  0b11011010, // 2
  0b11110010, // 3
  0b01100110, // 4
  0b10110110, // 5
  0b10111110, // 6
  0b11100000, // 7
  0b11111110, // 8
  0b11101110, // 9
} ;

void display7seg(int a)
{
  digitalWrite(SEG_A, seg[a] & 1 << 7);
  digitalWrite(SEG_B, seg[a] & 1 << 6);
  digitalWrite(SEG_C, seg[a] & 1 << 5);
  digitalWrite(SEG_D, seg[a] & 1 << 4);
  digitalWrite(SEG_E, seg[a] & 1 << 3);
  digitalWrite(SEG_F, seg[a] & 1 << 2);
  digitalWrite(SEG_G, seg[a] & 1 << 1);
  digitalWrite(SEG_DP, seg[a] & 1 << 0);
}

void outcolum(int b)
{
  digitalWrite(COM_D1, 1 & 1 << b);
  digitalWrite(COM_D2, 2 & 1 << b);
  digitalWrite(COM_D3, 4 & 1 << b);
  digitalWrite(COM_D4, 8 & 1 << b);
}
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

  display7seg(bufferr[i]);
  outcolum(i);
  delay(3);
  if (i < 4) {
    i++ ;
  }
  else {
    i = 0;
  }
}
