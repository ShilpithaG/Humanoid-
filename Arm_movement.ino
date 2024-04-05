#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;
Servo Servo7;
Servo Servo8;
Servo Servo9;
Servo Servo10;
Servo Servo11;
char data;
void setup()
{
  delay(1000);
  Serial.begin(9600); Servo1.attach(6); Servo2.attach(5); Servo3.attach(4); Servo4.attach(3); Servo5.attach(2);  Servo6.attach(11); Servo7.attach(10); Servo8.attach(9); Servo9.attach(8); Servo10.attach(7); Servo11.attach(12);
  delay(1000);
  Servo1.write(90);Servo2.write(30);Servo3.write(60);Servo4.write(90);Servo5.write(90);Servo6.write(90);Servo7.write(180);Servo8.write(90);Servo9.write(180);Servo10.write(120);Servo11.write(90); // Robot arm initial position
  
}

void loop() 
{
  while(Serial.available())
  {
    data = Serial.read();
    Serial.write(data);
  switch(data)
  {
    case 'w': Serial.println(" Saying hi ");  hi(); delay(10); break;

    case 's': Serial.println(" Home position "); back(); delay(10); break;
    
    case 'r': Serial.println(" Looking right ");  right(); delay(10); break;

    case 'l': Serial.println(" Looking left "); left(); delay(10); break;
   
    case 'h': Serial.println(" Shaking Hand "); shakehand(); delay(10); break;
  }
  } 
}
void hi()
{
  Servo11.write(90); 
   Serial.println(Servo11.read());
   delay(1000);
  // Make servo1 go to 90 degrees 
   Servo1.write(90);
   Serial.println(Servo1.read()); 
   delay(1000); 
   // Make servo2 go to 60 degrees 
   Servo2.write(60); 
   Serial.println(Servo2.read());
   delay(1000); 
   // Make servo3 go to 0 degrees 
   Servo3.write(0); 
   Serial.println(Servo3.read());
   delay(1000); 
  // Make servo4 go to 0 degrees 
   Servo4.write(0);
   Serial.println(Servo4.read()); 
   delay(1000); 
   // Make servo5 go to 180 degrees 
   Servo5.write(180); 
   Serial.println(Servo5.read());
   delay(1000);
   Servo5.write(150); 
   Serial.println(Servo5.read());
   delay(500);
   Servo5.write(180); 
   Serial.println(Servo5.read());
   delay(1000);
  
  
  // Make servo6 go to 90 degrees 
   Servo6.write(90);
   Serial.println(Servo6.read()); 
   delay(1000); 
   // Make servo7 go to 180 degrees 
   Servo7.write(180); 
   Serial.println(Servo7.read());
   delay(1000); 
   // Make servo8 go to 90 degrees 
   Servo8.write(90); 
   Serial.println(Servo8.read());
   delay(1000); 
  // Make servo9 go to 180 degrees 
   Servo9.write(180);
   Serial.println(Servo9.read()); 
   delay(1000); 
   // Make servo10 go to 120 degrees 
   Servo10.write(120); 
   Serial.println(Servo10.read());
   delay(1000);
   
}
void back()
{
  Servo11.write(90);
   Serial.println(Servo11.read()); 
   delay(1000)
  // Make servo1 go to 90 degrees 
   Servo1.write(90);
   Serial.println(Servo1.read()); 
   delay(1000); 
   // Make servo2 go to 30 degrees 
   Servo2.write(30); 
   Serial.println(Servo2.read());
   delay(1000); 
   // Make servo3 go to 60 degrees 
   Servo3.write(60); 
   Serial.println(Servo3.read());
   delay(1000); 
  // Make servo4 go to 90 degrees 
   Servo4.write(90);
   Serial.println(Servo4.read()); 
   delay(1000); 
   // Make servo5 go to 90 degrees 
   Servo5.write(90); 
   Serial.println(Servo5.read());
   delay(1000);   
 
  // Make servo6 go to 90 degrees 
   Servo6.write(90);
   Serial.println(Servo6.read()); 
   delay(1000); 
   // Make servo7 go to 180 degrees 
   Servo7.write(180); 
   Serial.println(Servo7.read());
   delay(1000); 
   // Make servo8 go to 90 degrees 
   Servo8.write(90); 
   Serial.println(Servo8.read());
   delay(1000); 
  // Make servo9 go to 180 degrees 
   Servo9.write(180);
   Serial.println(Servo9.read()); 
   delay(1000); 
   // Make servo10 go to 120 degrees 
   Servo10.write(120); 
   Serial.println(Servo10.read());
   delay(1000);
}
void right()
{
  Servo11.write(60);
  Serial.println(Servo11.read());
  delay(1000);
  Servo11.write(0);
  Serial.println(Servo11.read());
  delay(1000);
}
void left()
{
  Servo11.write(120);
  Serial.println(Servo11.read());
  delay(1000);
  Servo11.write(180);
  Serial.println(Servo11.read());
  delay(1000);
}
void shakehand()
{
  Servo11.write(90);
  Serial.println(Servo11.read());
  delay(1000);
  Servo6.write(140);
  Serial.println(Servo11.read());
  delay(1000);
  Servo10.write(45);
  Serial.println(Servo10.read());
  delay(1000);
  Servo10.write(90);
  Serial.println(Servo10.read());
  delay(1000);
  Servo10.write(45);
  Serial.println(Servo10.read());
  delay(1000);
}
