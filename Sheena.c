#include <SoftwareSerial.h>
#include <Servo.h>
#include <NewPing.h>

SoftwareSerial BT(0, 1);
String readvoice;

    Servo servo1;
  Servo servo2;
    Servo servo3;
  Servo servo4;
    Servo servo5;
  Servo servo6;
    Servo servo7;
  Servo servo8;
    Servo servo9;



 int angle;

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);

    pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);



  servo1.attach(8);
   servo2.attach(9);
    servo3.attach(10);
     servo4.attach(11);
      servo5.attach(A0);
      servo6.attach(A1);
     servo7.attach(A2);
    servo8.attach(A3);
   servo9.attach(7);


  servo1.write(180);
    servo2.write(95);
      servo3.write(180);
        servo4.write(0);
         servo5.write(15);
         servo6.write(90);
        servo7.write(0);
       servo8.write(160);
      servo9.write(95);

}

void loop() {
  while (BT.available())
  {
    delay(10);
    char c = BT.read();


    readvoice += c;

  }

  if (readvoice.length() > 0)
  {
    Serial.println("enter amar voice");
     Serial.println(readvoice);

    if(readvoice == "*normal position#" || readvoice == "*okay#" || readvoice == "*take position#" || readvoice == "*ok#")
    {

        take_position();
    }

    else if(readvoice == "*salute#")
    {

         servo5.write(15);
         servo6.write(90);
        servo7.write(0);
       servo8.write(160);

        for(angle = 15; angle <= 120; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }

        for(angle = 90; angle <= 140; angle += 10)
        {
          servo6.write(angle);
          delay(100);
        }

        for(angle = 0; angle <= 50; angle += 10)
        {
          servo7.write(angle);
          delay(100);
        }
        servo8.write(110);

        delay(10000);


       servo8.write(160);
        for(angle = 50; angle >= 0; angle -= 10)
        {
          servo7.write(angle);
          delay(100);
        }

        for(angle = 140; angle >= 90; angle -= 10)
        {
          servo6.write(angle);
          delay(100);
        }

        for(angle = 120; angle >= 15; angle -= 10)
        {
          servo5.write(angle);
          delay(100);
        }

        servo5.write(15);
         servo6.write(90);
        servo7.write(0);
       servo8.write(160);

    }

    else if(readvoice == "*hand shake#" || readvoice == "*handshake#")
    {
         servo5.write(15);
         servo6.write(90);
        servo7.write(0);
       servo8.write(160);

        for(angle = 15; angle <= 55; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }
        for(angle = 0; angle <= 30; angle += 10)
        {
          servo7.write(angle);
          delay(100);
        }
        servo8.write(70);
        delay(1000);

         servo7.write(20);
        delay(100);
         servo7.write(40);
        delay(100);
         servo7.write(20);
         delay(100);
            servo7.write(40);
        delay(100);
         servo7.write(20);
         delay(100);
         servo7.write(30);
        delay(100);

              servo7.write(20);
        delay(100);
         servo7.write(40);
        delay(100);
         servo7.write(20);
         delay(100);
            servo7.write(40);
        delay(100);
         servo7.write(20);
         delay(100);
         servo7.write(30);
        delay(100);

              servo7.write(20);
        delay(100);
         servo7.write(40);
        delay(100);
         servo7.write(20);
         delay(100);
            servo7.write(40);
        delay(100);
         servo7.write(20);
         delay(100);
         servo7.write(30);
        delay(100);



        delay(3000);
        servo8.write(160);
        for(angle = 30; angle >= 0; angle -= 10)
        {
          servo7.write(angle);
          delay(100);
        }
        for(angle = 55; angle >= 15; angle -= 10)
        {
          servo5.write(angle);
          delay(100);
        }
        delay(100);

       servo5.write(15);
         servo6.write(90);
        servo7.write(0);
       servo8.write(160);
    }

     else if(readvoice == "*tata#" || readvoice == "*hello#" || readvoice == "*hi#" || readvoice == "*bye#" || readvoice == "*good bye#")
    {

        for(angle = 15; angle <= 95; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }

        for(angle = 0; angle <= 70; angle += 10)
        {
          servo7.write(angle);
          delay(100);
        }
        delay(1000);

        servo6.write(70);
        delay(100);
        servo6.write(110);
        delay(100);
        servo6.write(70);
        delay(100);
          servo6.write(110);
        delay(100);
        servo6.write(70);
        delay(100);
        servo6.write(90);
        delay(1000);

        servo6.write(70);
        delay(100);
        servo6.write(110);
        delay(100);
        servo6.write(70);
        delay(100);
          servo6.write(110);
        delay(100);
        servo6.write(70);
        delay(100);
        servo6.write(90);
        delay(1000);


        servo6.write(70);
        delay(100);
        servo6.write(110);
        delay(100);
        servo6.write(70);
        delay(100);
          servo6.write(110);
        delay(100);
        servo6.write(70);
        delay(100);
        servo6.write(90);
        delay(1000);

        for(angle = 70; angle >= 0; angle -= 10)
        {
          servo7.write(angle);
          delay(100);
        }
        for(angle = 95; angle >= 15; angle -= 10)
        {
          servo5.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*left hand up#")
    {

        for(angle = 180; angle >= 80; angle -= 10)
        {
          servo1.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*left hand down#")
    {
        for(angle = 80; angle <= 180; angle += 10)
        {
          servo1.write(angle);
          delay(100);
        }
    }


    else if(readvoice == "*right hand up#")
    {
        for(angle = 15; angle <= 115; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }
    }


    else if(readvoice == "*right hand down#")
    {
        for(angle = 115; angle >= 15; angle -= 10)
        {
          servo5.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*move your hand#")
    {
        for(angle = 15; angle <= 105; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }
        for(angle = 180; angle >= 80; angle -= 10)
        {
          servo1.write(angle);
          delay(100);
        }

        for(angle = 90; angle >= 30; angle -= 10)
        {
           servo6.write(angle);
           delay(100);
        }
        for(angle = 95; angle <= 155; angle += 10)
        {
           servo2.write(angle);
           delay(100);
        }

        for(angle = 0; angle <= 90; angle += 10)
        {
          servo7.write(angle);
          delay(100);
        }
        for(angle = 180; angle >= 90; angle -= 10)
        {
          servo3.write(angle);
          delay(100);
        }

        for(angle = 0; angle <= 180; angle += 10)
        {
          servo8.write(angle);
          delay(100);
        }
        for(angle = 0; angle <= 180; angle += 10)
        {
          servo4.write(angle);
          delay(100);
        }

    }


    else if(readvoice == "*raise your hand#" || readvoice == "*both hand up#")
    {
        for(angle = 15; angle <= 115; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }

        for(angle = 180; angle >= 80; angle -= 10)
        {
          servo1.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*hands up#")
    {
        for(angle = 15; angle <= 145; angle += 10)
        {
          servo5.write(angle);
          delay(100);
        }

        for(angle = 180; angle >= 50; angle -= 10)
        {
          servo1.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*down your hand#" || readvoice == "*both hand down#")
    {
        for(angle = 115; angle >= 15; angle -= 10)
        {
          servo5.write(angle);
          delay(100);
        }

        for(angle = 80; angle <= 180; angle += 10)
        {
          servo1.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*move your head#" )
    {
        for(angle = 95; angle <= 155; angle += 5)
        {
          servo9.write(angle);
          delay(100);
        }

        for(angle = 155; angle >= 95; angle -= 5)
        {
          servo9.write(angle);
          delay(100);
        }

        for(angle = 95; angle >= 35; angle -= 5)
        {
          servo9.write(angle);
          delay(100);
        }
        for(angle = 35; angle <= 95; angle += 5)
        {
          servo9.write(angle);
          delay(100);
        }
    }

    else if(readvoice == "*head turn left#" || readvoice == "*turn left#")
    {
        for(angle = 95; angle <= 155; angle += 5)
        {
          servo9.write(angle);
          delay(100);
        }

        for(angle = 155; angle >= 95; angle -= 5)
        {
          servo9.write(angle);
          delay(100);
        }
    }


    else if(readvoice == "*head turn right#" || readvoice == "*turn right#")
    {
        for(angle = 95; angle >= 35; angle -= 5)
        {
          servo9.write(angle);
          delay(100);
        }
        for(angle = 35; angle <= 95; angle += 5)
        {
          servo9.write(angle);
          delay(100);
        }
    }

   else if(readvoice == "*go#" || readvoice == "*forward#" || readvoice == "*go forward#" || readvoice == "*come#")
  {
    digitalWrite(3, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(3000);

    digitalWrite (3, LOW);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (100);
  }

   else if(readvoice == "*long time go#" || readvoice == "*go long time#" || readvoice == "*go and go#")
  {
    digitalWrite(3, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(100);
  }

  else if(readvoice == "*back#" || readvoice == "*go back#")
  {
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6,HIGH);
    delay(3000);

    digitalWrite (3, LOW);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (100);
  }

  else if(readvoice == "*long time back#" || readvoice == "*back long time#" || readvoice == "*back and back#")
  {
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6,HIGH);

   delay (100);
  }
  else if (readvoice == "*left#")
  {

        for(angle = 95; angle <= 155; angle += 5)
        {
          servo9.write(angle);
          delay(100);
        }

        for(angle = 155; angle >= 95; angle -= 5)
        {
          servo9.write(angle);
          delay(100);
        }

    digitalWrite (3,HIGH);
    digitalWrite (5,LOW);
    digitalWrite (4,LOW);
    digitalWrite (6,LOW);
   delay (1700);
      digitalWrite(3, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(3000);

    digitalWrite (3, LOW);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (100);

  }

 else if ( readvoice == "*right#")
 {

        for(angle = 95; angle >= 35; angle -= 5)
        {
          servo9.write(angle);
          delay(100);
        }
        for(angle = 35; angle <= 95; angle += 5)
        {
          servo9.write(angle);
          delay(100);
        }
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (1500);
      digitalWrite(3, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(3000);

    digitalWrite (3, LOW);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }

 else if (readvoice == "*stop#" || readvoice == "*stip#" || readvoice == "*stap#" || readvoice == "*step#")
 {
   digitalWrite (3, LOW);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }
 else if (readvoice == "*circle#")
 {
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (5000);
 }
  else if (readvoice == "*dance#")
 {
 digitalWrite (3, LOW);
 digitalWrite (5, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (6, LOW);
 delay (400);
 digitalWrite(3, HIGH);
 digitalWrite (5, HIGH);
 digitalWrite(4,LOW);
 digitalWrite(6,LOW);
 delay(600);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);

digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (400);
   digitalWrite(3,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   delay(600);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (400);
   digitalWrite(3, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   delay(600);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (400);
   digitalWrite(3, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   delay(600);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);
   digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (6, LOW);
   delay (400);
   digitalWrite(3, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   delay(600);
    digitalWrite (3, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (6, LOW);
   delay (500);
    digitalWrite (3, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (6, HIGH);
   delay (500);
 }


   readvoice="";
   }
}

void take_position()
{

        servo4.write(0);
        servo8.write(160);


        servo3.write(180);
        servo7.write(0);
        delay(1000);

        servo2.write(95);
        servo6.write(90);
        delay(1000);


        for(angle = 90; angle <= 180; angle += 10)
        {
          servo1.write(angle);
          delay(100);
        }
        for(angle = 105; angle >= 15; angle -= 10)
        {
          servo5.write(angle);
          delay(100);
        }
        delay(1000);

        servo9.write(95);
        delay(1000);

}
