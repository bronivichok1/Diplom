
#include <wiring_private.h>


 byte MA[2200];
void setup() {
  byte AC1=0,AC2=0,AR1=9,AR2=0,d1,d2,d3,d4,d0,d5,d6;
  Serial.begin(9600);
  // put your setup code here, to run once: 1- запись вывод 0- чтение ввод
 PORTA =0x00;
 DDRA = B11111111;
 PORTB = 0x4F;
 DDRB = B10111111;
 PORTC=0x00;
 DDRC=0x00;
 
// sbi(PORTB,0);
#if 1
cbi(PORTB,3);//reset
PORTA=0xFF;
sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
cbi(PORTB,5);
sbi(PORTB,3);

//read ID
//DDRA=0xFF;
cbi(PORTB,3);
PORTA=0x90;

sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
cbi(PORTB,5);
PORTA=0;
sbi(PORTB,4);
cbi(PORTB,2);
sbi(PORTB,2);
PORTA=0;
DDRA=0x00;//Чтобы порт А не подвешивал резистор
cbi(PORTB,4);
cbi(PORTB,1);
_NOP();
d1=PINC;
sbi(PORTB,1);
_NOP();
cbi(PORTB,1);
_NOP();
d2=PINC;
sbi(PORTB,1);
_NOP();
cbi(PORTB,1);
_NOP();
d3=PINC;
sbi(PORTB,1);
_NOP();
cbi(PORTB,1);
_NOP();
d4=PINC;
sbi(PORTB,1);
sbi(PORTB,3);
Serial.print ("Read ID\n");
Serial.print (d1,HEX);
Serial.print ("\n");
Serial.print (d2,HEX);
Serial.print ("\n");
Serial.print (d3,HEX);
Serial.print ("\n");
Serial.print (d4,HEX);
Serial.print ("\n");
sbi(PORTB,3); 

Serial.print ("READ\n");
cbi(PORTB,3);//read
PORTA=0x00;
DDRA=0xFF;
sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
_NOP();
cbi(PORTB,5);
PORTA=AC1;
sbi(PORTB,4);
cbi(PORTB,2);
sbi(PORTB,2);
_NOP();
PORTA=AC2;
cbi(PORTB,2);
sbi(PORTB,2);
_NOP();
PORTA=AR1;
cbi(PORTB,2);
sbi(PORTB,2);
_NOP();
PORTA=AR2;
cbi(PORTB,2);
sbi(PORTB,2);
_NOP();
cbi(PORTB,4);

PORTA=0x30;
sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
_NOP();
cbi(PORTB,5);
delayMicroseconds(26);
PORTA=0;
DDRA=0;

for(int i=0;i<2200;i++){
cbi(PORTB,1);
_NOP();

//delayMicroseconds(5);
MA[i]=PINC;
sbi(PORTB,1);

}
for(int i=0;i<2112;i++){
  Serial.print (MA[i],HEX);
Serial.print (" ");
  if ((i &15) == 15) {
    Serial.print ("\n");}
}
cbi(PORTB,3);

//read status
PORTA=0x70;
DDRA=0xFF;
sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
cbi(PORTB,5);
PORTA=0;
DDRA=0x00;
_NOP();
cbi(PORTB,1);
_NOP();
d5=PINC;
d6=PINB;
sbi(PORTB,1);
sbi(PORTB,3);
Serial.print ("Read Status\n");
Serial.print (d5,HEX);
Serial.print ("\n");
Serial.print (d6,HEX);
Serial.print ("\n");


/*byte d6,d7;
DDRA=0xFF;
cbi(PORTB,3);
PORTA=0x80;
sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
cbi(PORTB,5);
DDRA=0x00;
cbi(PORTB,1);
d6=PINA;
d7=PINB;
sbi(PORTB,1);
sbi(PORTB,3);
Serial.print (d6,HEX);
Serial.print ("\n");
Serial.print (d7,HEX);
Serial.print ("\n");
sbi(PORTB,3);*/






 
 /*int mA;
 int cA;
 int bA;
 int gA;
 int address;
 int len;

for(int j=0; j<1000; ++j){
   if (Serial.available() > 0)
 len=Serial.parseInt();
 
if (Serial.available() > 0)
 mA=Serial.parseInt();
 if (Serial.available() > 0)
 cA=Serial.parseInt();
 if (Serial.available() > 0)
 bA=Serial.parseInt();
 if (Serial.available() > 0)
 gA=Serial.parseInt();*/
/*r R/D status B,A

cbi(PORTB,3);
PORTA=0x70;
sbi(PORTB,5);
cbi(PORTB,2);
sbi(PORTB,2);
cbi(PORTB,5);
DDRA=0x00;
cbi(PORTB,1);
d1=PINA;
d2=PINB;
sbi(PORTB,1);
sbi(PORTB,3);
Serial.print (d1,HEX);
Serial.print ("\n");
Serial.print (d2,HEX);
Serial.print ("\n");

*/

//cbi(PORTB,0);
#endif

}
void loop(){
  /*
 int mA;
 int cA;
 int mL;
 int cL;
 int address;
 int len;
for(int j=0; j<1000; ++j){
  if (Serial.available() > 0)
 mA=Serial.parseInt();
 if (Serial.available() > 0) 
 cA=Serial.parseInt();
 if (Serial.available() > 0) 
 mL=Serial.parseInt();
 if (Serial.available() > 0) 
 cL=Serial.parseInt();
 address = mA+(cA<<8);
 len = mL+(cL<<8);
 for (auto i = 0; i < len; ++i)
 {
  PORTC = (address>>8)& 0xFF;
  PORTK = address & 0xFF;
  ++address;
  Serial.print (PINL, HEX);
  
  Serial.print (" ");
  if ((i &15) == 15) {
    Serial.print ("\n");}
  };
  delay(100);
  break;
  };*/
}
