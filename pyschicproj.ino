#define RED 6
#define GREEN 10
#define BLUE 3
const int trigPin = 5;    // Trigger to arduino pin 4
const int echoPin = 4;   // Echo to arduino pin 5
long duration, cm;
void setup() 
{
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
 pinMode(RED,OUTPUT);//RED LED
 pinMode(GREEN,OUTPUT);//GREEN LED
 pinMode(BLUE,OUTPUT);//BLUE LED
}
 
void loop() {
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(15);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(15);
  if(cm<=10)//Random led flash
   {
     analogWrite(RED,255);
     delay(250);
   analogWrite(RED,135);
  delay(250);
   analogWrite(BLUE,255);
  delay(250);
   analogWrite(BLUE,100);
  delay(150);
   analogWrite(RED,0);
   analogWrite(GREEN,200);
  delay(100);
   analogWrite(BLUE,200);
   analogWrite(RED,200);
  delay(250);
   analogWrite(RED,0);
   analogWrite(GREEN,0);
  delay(150);
   analogWrite(GREEN,150);
   analogWrite(BLUE,255);
   analogWrite(RED,255);
  delay(150);
   analogWrite(GREEN,255);
  delay(225);
   analogWrite(BLUE,0);
  delay(125);
   analogWrite(RED,0);
  delay(150);
   analogWrite(BLUE,200);
  delay(130);
   analogWrite(GREEN,0);
  delay(170);
   analogWrite(RED,175);
  delay(100);
   analogWrite(BLUE,0);
  delay(100);
   analogWrite(RED,0);
  delay(1000);
 }
 else if(10<cm&&cm<=20)
  {
    int i;//pattern 1-12-123-123-12-1
   for(i=0;i<256;i++)//RED LED brightness increases
   {
    analogWrite(RED,i);
    delay(3);
   }
   for(i=255;i>=0;i--)//RED LED brightness decreases
   {
    analogWrite(RED,i);
    delay(3);
   }
   delay(10);//break
   for(i=0;i<256;i++)//RED and GREEN LED brightness increases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    delay(3);
   }
   for(i=255;i>=0;i--)//RED and GREEN LED brightness decreases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    delay(3);
   }
   delay(10);//break
   for(i=0;i<256;i++)//RED,GREEN and BLUE LED brightness increases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    analogWrite(BLUE,i);
    delay(3);
   }
   for(i=255;i>=0;i--)//RED,GREEN and BLUE LED brightness decreases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    analogWrite(BLUE,i);
    delay(3);
   }
   delay(10);//BREAK
   for(i=0;i<256;i++)//RED,GREEN and BLUE LED brightness increases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    analogWrite(BLUE,i);
    delay(3);
   }
   for(i=255;i>=0;i--)//RED,GREEN and BLUE LED brightness decreases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    analogWrite(BLUE,i);
    delay(3);
   }
   delay(10);//break
   for(i=0;i<256;i++)//RED and GREEN LED brightness increases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    delay(3);
   }
   for(i=255;i>=0;i--)//RED and GREEN LED brightness decreases
   {
    analogWrite(RED,i);
    analogWrite(GREEN,i);
    delay(3);
   }
   delay(10);//break
   for(i=0;i<256;i++)//RED LED brightness increases
   {
    analogWrite(RED,i);
    delay(3);
   }
   for(i=255;i>=0;i--)//RED LED brightness decreases
   {
    analogWrite(RED,i);
    delay(3);
   }
   delay(10);//BREAK
 }
 else if(20<cm&&cm<=30)
  {
     int i;//pattern all on-all off blinking
  for(i=0;i<256;i++)//All LEDs brightness increases
  {
   analogWrite(RED,i);
   analogWrite(GREEN,i);
   analogWrite(BLUE,i);
   delay(5);
  }
  delay(50);
  for(i=255;i>=0;i--)//All LEDs brightness decreases
  {
  analogWrite(RED,i);
  analogWrite(GREEN,i);
  analogWrite(BLUE,i);
  delay(5);
 }
 delay(20);
    }
     else if(30<cm&&cm<=40)
     {
       int r,g,b;//pattern 123 321
 for(r=0;r<256;r++)//RED LED brightness increases
 {
  analogWrite(RED,r);
  delay(3);
 }
 for(g=0;g<256;g++)//GREEN LED brightness increases
 {
  analogWrite(GREEN,g);
  delay(3);
 }
 for(b=0;b<256;b++)//BLUE LED brightness increases
 {
  analogWrite(BLUE,b);
  delay(3);
 }
 for(r=255;r>=0;r--)//RED LED brightness decreases
 {
  analogWrite(RED,r);
  delay(3);
 }
  for(g=255;g>=0;g--)//GREEN LED brightness decreases
 {
  analogWrite(GREEN,g);
  delay(3);
 }
 for(b=255;b>=0;b--)//BLUE LED brightness decreases
 {
  analogWrite(BLUE,b);
  delay(3);
 }
     }
 else if(40<cm&&cm<=50)
  {
   int i;
   for(i=0;i<256;i++)//RED LED brightness increases
    {
     analogWrite(RED,i);
     delay(1);
    }
   for(i=255;i>=0;i--)//RED LED brightness decreases
    {
     analogWrite(RED,i);
     delay(1);
    }
    delay(5);//break
   for(i=0;i<256;i++)//RED and GREEN LED brightness increases
    {
     analogWrite(RED,i);
     analogWrite(GREEN,i);
     delay(2);
    }
   for(i=255;i>=0;i--)//RED and GREEN LED brightness decreases
    {
     analogWrite(RED,i);
     analogWrite(GREEN,i);
     delay(2);
    }
    delay(5);//break
   for(i=0;i<256;i++)//RED,GREEN and BLUE LED brightness increases
    {
      analogWrite(RED,i);
     analogWrite(GREEN,i);
     analogWrite(BLUE,i);
     delay(3);
    }
  for(i=255;i>=0;i--)//RED,GREEN and BLUE LED brightness decreases
    {
     analogWrite(RED,i);
     analogWrite(GREEN,i);
     analogWrite(BLUE,i);
     delay(3);
    }
    delay(10);
 }
 else if(50<cm&&cm<=60)
 {
    int r,g,b;//pattern 1-2-3
    for(r=0;r<256;r++)//RED LED brightness increases
    {
      analogWrite(RED,r);
      delay(3);
 
     }
    for(r=255;r>=0;r--)//RED LED brightness decreases
     {
      analogWrite(RED,r);
      delay(3);
     }
    for(g=0;g<256;g++)//GREEN LED brightness increases
     {
      analogWrite(GREEN,g);
      delay(3);
     }
    for(g=255;g>=0;g--)//GREEN LED brightness decreases
     {
      analogWrite(GREEN,g);
      delay(3);
     }
    for(b=0;b<256;b++)//BLUE LED brightness increases
     {
    
       analogWrite(BLUE,b);
      delay(3);
     }
    for(b=255;b>=0;b--)//BLUE LED brightness decreases
    {
      analogWrite(BLUE,b);
      delay(3);
    }
 }
 else if(60<cm&&cm<=70)
 {
   int FADESPEED=150;
          
    analogWrite(RED, 255);
    delay(FADESPEED);
    analogWrite(RED,0);
    analogWrite(GREEN, 255);
    delay(FADESPEED);
    analogWrite(GREEN,0);
    analogWrite(BLUE, 255);
    delay(FADESPEED);
    analogWrite(BLUE,0);
    delay(FADESPEED+50);
    analogWrite(BLUE, 255);
    delay(FADESPEED);
    analogWrite(BLUE,0);
    analogWrite(GREEN, 255);
    delay(FADESPEED);
    analogWrite(GREEN,0);
    analogWrite(RED, 255);
    delay(FADESPEED);
    analogWrite(RED,0);
    delay(FADESPEED+50);
 }
 else if(cm>70)
 {
  analogWrite(RED,255);
     delay(25);
   analogWrite(RED,135);
  delay(25);
   analogWrite(BLUE,255);
  delay(25);
   analogWrite(BLUE,100);
  delay(15);
   analogWrite(RED,0);
   analogWrite(GREEN,200);
  delay(10);
   analogWrite(BLUE,200);
   analogWrite(RED,200);
  delay(20);
   analogWrite(RED,0);
   analogWrite(GREEN,0);
  delay(10);
   analogWrite(GREEN,150);
   analogWrite(BLUE,255);
   analogWrite(RED,255);
  delay(15);
   analogWrite(GREEN,255);
  delay(25);
   analogWrite(BLUE,0);
  delay(25);
   analogWrite(RED,0);
  delay(10);
   analogWrite(BLUE,200);
  delay(30);
   analogWrite(GREEN,0);
  delay(15);
   analogWrite(RED,175);
  delay(10);
   analogWrite(BLUE,0);
  delay(10);
   analogWrite(RED,0);
  delay(100);  
 }
}
