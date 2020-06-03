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
    case 'P': irsend.sendNEC(0x1FE48B7, 32); Serial.println("OK"); break;
    case '1': irsend.sendNEC(0x1FE20DF, 32); Serial.println("OK"); break;
    case '2': irsend.sendNEC(0x1FEA05F, 32); Serial.println("OK"); break;
    case '3': irsend.sendNEC(0x1FE609F, 32); Serial.println("OK"); break;
    case '4': irsend.sendNEC(0x1FEE01F, 32); Serial.println("OK"); break;
    case '5': irsend.sendNEC(0x1FE906F, 32); Serial.println("OK"); break;
    case 'L': irsend.sendNEC(0x1FE30CF, 32); Serial.println("OK"); break;
    case 'R': irsend.sendNEC(0x1FE708F, 32); Serial.println("OK"); break;
    default: break;
  }
 }
}
