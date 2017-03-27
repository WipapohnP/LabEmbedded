 int LED1 = 0;
 int LED2 = 1;
 int LED3 = 2;
 int LED4 = 4;

 int value = 0;
 void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}
void showvalue(int value)
{
  digitalWrite(LED1, value & 1);
  digitalWrite(LED2, value & 2);
  digitalWrite(LED3, value & 4);
  digitalWrite(LED4, value & 8);
}
void loop() {
  // put your main code here, to run repeatedly:
  showvalue(value);
  value = value >> 1;
  if (value < 1 ) value = 8; 
  if (value > 
  delay (1000);
  
}

