#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() {
 if (Serial.available())
 {
  char c = Serial.read();
  switch(c)
  {
    case '1': irsend.sendNEC(0xFD027F80, 32); Serial.println("OK"); break;
    case '2': irsend.sendNEC(0xFB047F80, 32); Serial.println("OK"); break;
    case '3': irsend.sendNEC(0xF9067F80, 32); Serial.println("OK"); break;
    default: break;
  }
 }
}
