int LED1 = 4;
int LED2 = 5;
int LED3 = 6;
int LED4 = 7;
int Switch = 0;
int i;
int ran;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(Switch, INPUT);
}

//void showvalue(int value)
//{
//
//}
void loop() {
  // put your main code here, to run repeatedly:
  
  i = digitalRead(Switch);

  if (i == 0)
  {
    ran = random(1, 7);
    if (ran == 1)
    {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
    } else if (ran == 2)
    {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
    } else if (ran == 3)
    {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
    }else if (ran == 4)
    {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
    }else if (ran == 5)
    {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
    }else if (ran == 6)
    {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
    }
  }
}
 


