
#include "Keyboard.h"

const int bt1 = 8;
const int bt2 = 13;
const int bt3 = 5;
const int bt4 = 10;
const int bt5 = 12;
const int bt6 = A0;
const int bt7 = 9;
const int bt8 = 11; 
const int bt9 = 7;
const int bt10 = A2;
const int bt11 = A3;
const int bt12 = 6;

int p1 = HIGH;  
int p2 = HIGH;  
int p3 = HIGH;  
int p4 = HIGH;  
int p5 = HIGH;  
int p6 = HIGH;  
int p7 = HIGH;  
int p8 = HIGH;  
int p9 = HIGH;  
int p10 = HIGH;  
int p11 = HIGH;     
int p12 = HIGH;

void setup() {

  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(bt3, INPUT);
  pinMode(bt4, INPUT);
  pinMode(bt5, INPUT);
  pinMode(bt6, INPUT);
  pinMode(bt7, INPUT);
  pinMode(bt8, INPUT);
  pinMode(bt9, INPUT);
  pinMode(bt10, INPUT);
  pinMode(bt11, INPUT);
  pinMode(bt12, INPUT);

  Keyboard.begin();
}

void loop() {
  int b1 = digitalRead(bt1);
  int b2 = digitalRead(bt2);
  int b3 = digitalRead(bt3);
  int b4 = digitalRead(bt4);
  int b5 = digitalRead(bt5);
  int b6 = digitalRead(bt6);
  int b7 = digitalRead(bt7);
  int b8 = digitalRead(bt8);
  int b9 = digitalRead(bt9);
  int b10 = digitalRead(bt10);
  int b11 = digitalRead(bt11);
  int b12 = digitalRead(bt12);

  if ((b1 != p1)
      && (b1 == HIGH)) {
    Keyboard.print("0");
  }
  p1 = b1;

  if ((b2 != p2)
      && (b2 == HIGH)) {
    Keyboard.print("1");
  }
  p2 = b2;

  if ((b3 != p3)
      && (b3 == HIGH)) {
    Keyboard.print("2");
  }
  p3 = b3;

  if ((b4 != p4)
      && (b4 == HIGH)) {
    Keyboard.print("3");
  }
  p4 = b4;

  if ((b5 != p5)
      && (b5 == HIGH)) {
    Keyboard.print("4");
  }
  p5 = b5;

  if ((b6 != p6)
      && (b6 == HIGH)) {
    Keyboard.print("5");
  }
  p6 = b6;

  if ((b7 != p7)
      && (b7 == HIGH)) {
    Keyboard.print("6");
  }
  p7 = b7;

  if ((b8 != p8)
      && (b8 == HIGH)) {
    Keyboard.print("7");
  }
  p8 = b8;

  if ((b9 != p9)
      && (b9 == HIGH)) {
    Keyboard.print("8");
  }
  p9 = b9;

  if ((b10 != p10)
      && (b10 == HIGH)) {
    Keyboard.print("9");
  }
  p10 = b10;

  if ((b11 != p11)
      && (b11 == HIGH)) {
    Keyboard.print("a");
  }
  p11 = b11;

  if ((b12 != p12)
      && (b12 == HIGH)) {
    Keyboard.print("b");
  }
  p12 = b12;



} 
