int potPin = 2;
int ledPin1 = 8;
int ledPin2 = 9;
int ledPin3 = 10;
int val = 0;

void LED1_ON()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
}
void LED2_ON()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void LED3_ON()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
}
void LED4_ON()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
}
void LED5_ON()
{
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
}

void LED6_ON()
{
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10,OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  LED3_ON();
  delay(100);
  LED1_ON();
  delay(100);
  LED4_ON();
  delay(100);
  LED2_ON();
  delay(100);
  LED5_ON();
  delay(100);
  LED6_ON();
  delay(100);

  val = analogRead(potPin);
  digitalWrite(ledPin1, HIGH);
  delay(val);
  digitalWrite(ledPin1, LOW);
  delay(val);
  digitalWrite(ledPin2, HIGH);
  delay(val);
  digitalWrite(ledPin2, LOW);
  delay(val);
  digitalWrite(ledPin3, HIGH);
  delay(val);
  digitalWrite(ledPin3, LOW);
  delay(val);
  
  
}
