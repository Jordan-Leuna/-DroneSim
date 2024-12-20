#include<iostream>
#include"position.h"
using namespace std;

koordinaten position:: getPosition()
   {
     return aktuellPosition;
   } 

void position::setPosition(int a, int b, int c)
   {
      aktuellPosition.x = a;
      aktuellPosition.y = b;
      aktuellPosition.z = c;
   } 
