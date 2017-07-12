//#include <HashMap.h>

//Declare all the button constant
const int button0 = 0;
const int button1 = A0;
const int button2 = A1;
const int button3 = A2;
const int button4 = A3;
const int button5 = A4;
const int button6 = A5;

//Setting values initially
int val0 = 0;
int valA0 = 0;
int valA1 = 0;
int valA2 = 0;
int valA3 = 0;
int valA4 = 0;
int valA5 = 0;
//Checking Complete Button
int complete = 0;
//Chececk sum value
int sumvalue = 0;
//Check Number Format
int isNumber = 0;

long lastDebounceTime = 0;
long debounceDelay = 200;
void setup() {
  // put your setup code here, to run once:
  //  Initialize pinMode for all the button
  pinMode(button0, INPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);

pinMode(button0, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLUP);// Hanging out nowhere so long as not hanging up so many idiots how much and how much money
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
}

void loop() {

  //  Read All The Button Pressed
  val0 = digitalRead(0);
  valA0 = digitalRead(A0);
  valA1 = digitalRead(A1);
  valA2 = digitalRead(A2);
  valA3 = digitalRead(A3);
  valA4 = digitalRead(A4);
  valA5 = digitalRead(A5);
  // put your main code here, to run repeatedly:

  //Testing all the Button works
  if ( (millis() - lastDebounceTime) > debounceDelay) {
    if (val0 == LOW) {         // check if the input is HIGH (button released)
//          Serial.println("Button 0 pressed");
    complete = 1;
    }
    if (valA0 == LOW) {
//            Serial.println("Button A0 pressed");
      sumvalue = sumvalue + 1;
    }
    if (valA1 == LOW) {
//            Serial.println("Button A1 pressed");
      sumvalue = sumvalue + 2;
    }
    if (valA2 == LOW) {
//            Serial.println("Button A2 pressed");
      sumvalue = sumvalue + 4;
    }
    if (valA3 == LOW) {
//            Serial.println("Button A3 pressed");
      sumvalue = sumvalue + 8;
    }
    if (valA4 == LOW) {
//            Serial.println("Button A4 pressed");
      sumvalue = sumvalue + 16;
    }
    if (valA5 == LOW) {
//            Serial.println("Button A5 pressed");
      sumvalue = sumvalue + 32;
    }

     if (complete == 1 && sumvalue == 60) {
      isNumber = 1;
    }

    if (complete == 1 && isNumber == 0) {
      switch (sumvalue) {
        case 1:
          Serial.print('A');
          break;
        case 3:
          Serial.print('B');
          break;
        case 9:
          Serial.print('C');
          break;
        case 25:
          Serial.print('D');
          break;
        case 17:
          Serial.print('E');
          break;
        case 11:
          Serial.print('F');
          break;
        case 27:
          Serial.print('G');
          break;
        case 19:
          Serial.print('H');
          break;
        case 10:
          Serial.print('I');
          break;
        case 26:
          Serial.print('J');
          break;
        case 5:
          Serial.print('K');
          break;
        case 7:
          Serial.print('L');
          break;
        case 13:
          Serial.print('M');
          break;
        case 29:
          Serial.print('N');
          break;
        case 21:
          Serial.print('O');
          break;
        case 15:
          Serial.print('P');
          break;
        case 31:
          Serial.print('Q');
          break;
        case 23:
          Serial.print('R');
          break;
        case 14:
          Serial.print('S');
          break;
        case 30:
          Serial.print('T');
          break;
        case 37:
          Serial.print('U');
          break;
        case 39:
          Serial.print('V');
          break;
        case 58:
          Serial.print('W');
          break;
        case 45:
          Serial.print('X');
          break;
        case 61:
          Serial.print('Y');
          break;
        case 53:
          Serial.print('Z');
          break;
        default:
          Serial.print("Invalid Alphabet");
      }
      complete = 0;
      sumvalue = 0;
    }

    if (complete == 1 && isNumber == 1) {
      switch (sumvalue) {
        case 2:
          Serial.print('0');
          break;
        case 1:
          Serial.print('1');
          break;
        case 3:
          Serial.print('2');
          break;
        case 9:
          Serial.print('3');
          break;
        case 25:
          Serial.print('4');
          break;
        case 17:
          Serial.print('5');
          break;
        case 11:
          Serial.print('6');
          break;
        case 27:
          Serial.print('7');
          break;
        case 19:
          Serial.print('8');
          break;
        case 10:
          Serial.print('9');
          break;
        case 26:
          Serial.print('10');
          break;
        default:
          Serial.print("Invalid Number");
      }
      complete = 0;
      sumvalue = 0;
      isNumber = 0;

    }

    lastDebounceTime = millis();
  }
 

}

