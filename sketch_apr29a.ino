
#include <LiquidCrystal.h>
 

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

const int button1 = A0;
const int button2 = A1;
const int button3 = A2;
const int button4 = A3;
const int button5 = A4;
const int button6 = A5;
const int button7 = A6;

const int num1 = 7;
const int num2 = 6;

const int num3 = 5;
const int num4 = 4;
const int num5 = 3;
const int num6 = 2;

int i=0;
int val1=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;
int val6=0;

void setup() {
  
  
 
  lcd.begin(16, 2);
  //In ra màn hình lcd dòng chữ Toi yeu Arduino
  lcd.print("BAILLY KEYBOARD!");


  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT); 
  pinMode(button4, INPUT); 
  pinMode(button5, INPUT); 
  
 // pinMode(button1, INPUT_PULLUP);
  //pinMode(button2, INPUT_PULLUP);
 // pinMode(button3, INPUT_PULLUP);
  //pinMode(button4, INPUT_PULLUP);
 // pinMode(button5, INPUT_PULLUP);
 // pinMode(button6, INPUT_PULLUP);

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT); 
  
  digitalWrite(button1, HIGH);
  digitalWrite(button2, HIGH);
  digitalWrite(button3, HIGH);
  digitalWrite(button4, HIGH);
  digitalWrite(button5, HIGH);
  digitalWrite(button6, HIGH);
    
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}

void loop() 
{     
  lcd.setCursor(0, 1);
  // lan 1 
  val1=digitalRead(A0);
  val2=digitalRead(A1);
  val3=digitalRead(A2);
  val4=digitalRead(A3);
  val5=digitalRead(A4);
  val6=digitalRead(A5);
  if(val1==LOW)
   { 
     lcd.print("A");
     digitalWrite(num1, LOW);
     {if(val2==LOW)
  
    
     {lcd.print("B");
     digitalWrite(num2, LOW);}
     else
     digitalWrite(num2, HIGH);
     }
     }
  else
     digitalWrite(num1, HIGH);
  
   
  if(val3==LOW)
   {
     lcd.print("3");
     digitalWrite(num3, LOW);}
   else
     digitalWrite(num3, HIGH);
  if(val4==LOW)
   { 
     lcd.print("4");
     digitalWrite(num4, LOW);}
   else
     digitalWrite(num4, HIGH);
  if(val5==LOW)
   { 
     lcd.print("5");
     digitalWrite(num5, LOW);}
   else
     digitalWrite(num5, HIGH);
  if(val6==LOW)
   { 
     lcd.print("6");
     digitalWrite(num6, LOW);}
   else
     digitalWrite(num6, HIGH);
   //lcd.clear();
}
