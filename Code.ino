

#include <SoftwareSerial.h>


SoftwareSerial BT(2, 7); //TX, RX respetively
String readvoice;
int t=1300;
int turn=10000;
void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}
//-----------------------------------------------------------------------// 
//---------------------by Vadivelan eleventh in the model school------------------------------//
void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  delay(4); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial read
  readvoice += c; 
  } 
  if (readvoice.length() > 0) {
    Serial.println(readvoice);
    
     if(readvoice == "forward")
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(100);
  }

  else if(readvoice == "backward")
  {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6,HIGH);
    delay(100);
  }

  else if (readvoice == "left")
  {
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,LOW);
    delay (turn);
  
  }

 else if ( readvoice == "right")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (turn);
 }

 else if (readvoice == "stop")
 {
   digitalWrite (3,LOW);
   digitalWrite (4,LOW);
   digitalWrite (5,LOW);
   digitalWrite (6,LOW);
   delay (100);
 }
     else if (readvoice == "move three units")
  {
    digitalWrite(3,HIGH);
    digitalWrite (4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(t);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
   else if (readvoice == "move 3 units")
  {
    digitalWrite(3,HIGH);
    digitalWrite (4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(t);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else if (readvoice == "move five units")
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(1600);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(5,LOW); 
  }
   else if (readvoice == "move 5 units")
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(1600);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(5,LOW); 
  }
    else if (readvoice == "back")
  {
    digitalWrite(3,LOW);
    digitalWrite (4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(t);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else if (readvoice == "come back")
  {
    digitalWrite(3,LOW);
    digitalWrite (4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(1600);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
    else if (readvoice == "go and come back")
  {
    digitalWrite(3,HIGH);
    digitalWrite (4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(t);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(t);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
readvoice="";}} //Reset the variable

