//Arduino - python haberleşme kodu
#include <LiquidCrystal.h>

#define led 6
#define led1 7
#define led2 8
#define led3 9
#define led4 10
int data, flag = 2;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  lcd.begin(16, 2);                       
  lcd.setCursor (0,0);                   
  lcd.print("                ");
  lcd.setCursor (0,1);
  lcd.print("                ");
}

void loop()
{
  while( Serial.available() )
  {
    data = Serial.read();

    if (data == '1')
    {
      flag = 1;
    }
    else if(data == '0')
    {
      flag = 0;
    }
  }
  if(flag == 1)
    {
      lcd.setCursor (0,0);
      lcd.print("  Hos Geldiniz!  ");
      lcd.setCursor (0,1);
      lcd.print(" Kilit Acildi :)  ");
      digitalWrite(led, HIGH);
      delay(2000);
      digitalWrite(LED_BUILTIN, HIGH);
      
    }
     else (flag == 1);
    {
      lcd.setCursor (0,0);
      lcd.clear();
      lcd.print("Yuz Taninmadi  ");
      digitalWrite(led, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(LED_BUILTIN, LOW);
    }
}
