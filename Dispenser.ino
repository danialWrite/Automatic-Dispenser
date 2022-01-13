#include<Servo.h>
int fml=7;
int hml=6;
int ofml=5;
int thml=4;
int tfml=3;
int motor=2;
int greenled=9;
int redled=8;
int servoled=10;
int gndsns=12;
int servopot=A1;
int mlpot=A0;
int angle;
int ground;
int val;
int qty;
int fiftyml=1000;
int ml;
Servo myservo;

void setup() {
   Serial.begin(9600);
   pinMode(fml,OUTPUT);
   pinMode(hml,OUTPUT);
   pinMode(ofml,OUTPUT);
   pinMode(thml,OUTPUT);
   pinMode(tfml,OUTPUT);
   pinMode(motor,OUTPUT);
   pinMode(redled,OUTPUT);
   pinMode(greenled,OUTPUT);
   pinMode(servoled,OUTPUT);
   pinMode(gndsns,INPUT);
   pinMode(servopot,INPUT);
   pinMode(mlpot,INPUT);
   myservo.attach(11);
}

void loop() {
    ground=digitalRead(gndsns);
    ml=analogRead(mlpot);
    val=map(angle,0,1023,10,180);
    Serial.print(ground);
    Serial.print(":");
    Serial.println(ml);
    myservo.write(0);
    leds();
    fifty();
    hundred();
    onefifty();
    twohundred();
    twofifty();
    
    if(ground==0 && ml<24){
      digitalWrite(motor,HIGH);
      
      }
    if(ground==0 && qty==fifty){
      digitalWrite(motor,HIGH);
      delay(fiftyml);
      digitalWrite(fml,HIGH);
      digitalWrite(motor LOW);
      }
    if(ground==0 && qty==hundred){
      digitalWrite(motor,HIGH);
      delay(fiftyml);
      digitalWrite(fml,HIGH);
      delay(fiftyml);
      digitalWrite(hml,LOW);
      digitalWrite(motor LOW);
      }
    if(ground==0 && qty==onefifty){
      digitalWrite(motor,HIGH);
      delay(fiftyml);
      digitalWrite(fml,HIGH);
      delay(fiftyml);
      digitalWrite(hml,LOW);
      delay(fiftyml);
      digitalWrite(ofml,HIGH);
      digitalWrite(motor LOW);
      }
    if(ground==0 && qty==twohundred){
      digitalWrite(motor,HIGH);
      delay(fiftyml);
      digitalWrite(fml,HIGH);
      delay(fiftyml);
      digitalWrite(hml,LOW);
      delay(fiftyml);
      digitalWrite(ofml,LOW);
      delay(fiftyml);
      digitalWrite(thml,HIGH);
      digitalWrite(motor LOW);
      }
    if(ground==0 && qty==twofifty){
      digitalWrite(motor,HIGH);
      delay(fiftyml);
      digitalWrite(fml,HIGH);
      delay(fiftyml);
      digitalWrite(hml,LOW);
      delay(fiftyml);
      digitalWrite(ofml,LOW);
      delay(fiftyml);
      digitalWrite(thml,HIGH);
      delay(fiftyml);
      digitalWrite(tfml,HIGH);
      digitalWrite(motor LOW);
      }
        }
void leds(){
  digitalWrite(redled,HIGH);
  digitalWrite(greenled,HIGH);
  digitalWrite(fml,HIGH);
  digitalWrite(hml,LOW);
  digitalWrite(ofml,HIGH);
  digitalWrite(thml,HIGH);
  digitalWrite(tfml,HIGH);
  }
void ledsoff(){
  digitalWrite(redled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(fml,LOW);
  digitalWrite(hml,HIGH);
  digitalWrite(ofml,LOW);
  digitalWrite(thml,LOW);
  digitalWrite(tfml,LOW);
  }
void fiftyml(){
  if (ml>=24 && ml<=224){
    qty=fifty;
    }
  }
void hundredyml(){
  if (ml>224 && ml<=424){
    qty=hundred;
    }
  }
void onefiftyml(){
  if (ml>424 && ml<=624){
    qty=onefifty;
    }
  }
void twohundredyml(){
  if (ml>624 && ml<=824){
    qty=twohundred;
    }
  }
void twofiftyml(){
  if (ml>824 && ml<=1024){
    qty=twofifty;
    }
  }
