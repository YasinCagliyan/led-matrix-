int st = 9;
int sh = 11;
int ds = 10;
int scha1 =6;
int scha2 =7;
int scha3 =8;

int pot = A1;
int pot2 = A2;
int pot3=A3;
int value = 0;

int snelheid = 500;

void setup() {
      pinMode(sh, OUTPUT);
      pinMode(st, OUTPUT);
      pinMode(ds, OUTPUT);
      pinMode(scha1, INPUT);       
      pinMode(scha2, INPUT);    
      pinMode(scha3, INPUT);    
}

void loop() {
      
    /*digitalWrite(animatie1(), digitalRead(scha1));
    digitalWrite(animatie2(), digitalRead(scha2));
    digitalWrite(animatie3(), digitalRead(scha3));*/
    if (digitalRead(scha1)==HIGH)
    {
    animatie1();  
    }
    else if (digitalRead(scha2)==HIGH)
    {
    animatie2();
    }
    else if (digitalRead(scha3)==HIGH)
    {
    animatie3(); 
    }
}
void writeBit(unsigned char reg1, unsigned char reg2)
{
      digitalWrite (st, LOW);
      delay (5);
      shiftOut(ds,sh,LSBFIRST, reg1);
      shiftOut(ds,sh,LSBFIRST, reg2);
      delay(5);
      digitalWrite (st, HIGH);
  
}

void animatie1()
{
      writeBit(0b10000110, 0b11011100);
      delay(analogRead(pot));
      vierkant1();
      delay(analogRead(pot));
      vierkant2();
      delay(analogRead(pot));
      vierkant3();
      delay(analogRead(pot));
      vierkant3();
      delay(analogRead(pot));
      vierkant2();
      delay(analogRead(pot));
      vierkant1();
      delay(analogRead(pot));
      writeBit(0b10000110, 0b11011100);
      delay(analogRead(pot));
}
void vierkant1 ()
{
      writeBit(0b11110010, 0b11011010);
      delay(analogRead(pot2));
      writeBit(0b01100010, 0b11010000);
      delay(analogRead(pot2));
}
 
void vierkant2()
{
      writeBit(0b11110101, 0b10111110);
      delay(analogRead(pot2));
      writeBit(0b00000001, 0b10110000);
      delay(analogRead(pot2));
}
void vierkant3()
{
      writeBit(0b11111111, 0b01101111);
      delay(analogRead(pot2));
      writeBit(0b0001000, 0b00000001);
      delay(analogRead(pot2));
   
}
 
void animatie2()
{
      writeBit(0b00011111, 0b00010110);
      delay(analogRead(pot));
      writeBit(0b10100110, 0b11010010);
      delay(analogRead(pot));
      writeBit(0b01010010, 0b11011100);
      delay(analogRead(pot));
      writeBit(0b00010100, 0b11100111);
      delay(analogRead(pot));
      writeBit(0b00010010, 0b11110101);
      delay(analogRead(pot));
      writeBit(0b000000110, 0b11110011);
      delay(analogRead(pot));
      writeBit(0b00010110, 0b00110111);
      delay(analogRead(pot));
      writeBit(0b01000110, 0b11011010);
      delay(analogRead(pot));
      writeBit(0b10110010, 0b11010100);
      delay(analogRead(pot));
      writeBit(0b00011101, 0b11000110);
      delay(analogRead(pot));
      writeBit(0b00011011, 0b11010100);
      delay(analogRead(pot));
      writeBit(0b00001111, 0b11010010); 
      delay(analogRead(pot));
      writeBit(0b00011111, 0b00010110);
      delay(analogRead(pot));
}
  
void animatie3()
{
     x();
     z();
     y();
     z();

}
void x()
{
      writeBit(0b00000000, 0b00000001);
      delay(analogRead(pot));
      writeBit(0b00000000, 0b00100000);
      delay(analogRead(pot));
      writeBit(0b01000000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00000000, 0b00001000);
      delay(analogRead(pot));
      writeBit(0b10000000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00100000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00000001, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00001000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00001000, 0b00000000);
      delay(analogRead(pot));
       writeBit(0b00000001, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00100000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b10000000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00000000, 0b00001000);
      delay(analogRead(pot));
      writeBit(0b01000000, 0b00000000);
      delay(analogRead(pot));
      writeBit(0b00000000, 0b00100000);
      delay(analogRead(pot));
      writeBit(0b00000000, 0b00000001);
      delay(analogRead(pot));
}

void y()
{
  writeBit(0b11111111, 0b01111111);//1
      delay(analogRead(pot));
      writeBit(0b11111111, 0b10111111);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b11111011);
      delay(analogRead(pot));
      writeBit(0b11101111, 0b11111111);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b11111101);
      delay(analogRead(pot));
      writeBit(0b11111011, 0b11111111);
      delay(analogRead(pot));
      writeBit(0b11111101, 0b11111111);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b11101111);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b11101111);
      delay(analogRead(pot));
      writeBit(0b11111101, 0b11111111);
      delay(analogRead(pot));
      writeBit(0b11111011, 0b11111111);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b11111101);
      delay(analogRead(pot));
      writeBit(0b11101111, 0b11111111);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b11111011);
      delay(analogRead(pot));
      writeBit(0b11111111, 0b10111111);
      delay(analogRead(pot));
}

void z()
{
   writeBit(0b00011110, 0b01000111);
   delay(analogRead(pot));
}
