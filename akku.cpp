#include<iostream>
#include"akku.h"
using namespace std;

float akku::getKapazitaet()
   {
      return kapazitaet;
   } 

void akku::setKapazitaet(float kapazitaet)
   {
    if (kapazitaet > 5000)
        {
            this->kapazitaet = 5000;  // maximale Kapazität ist 5000 , wenn mehr als 5000
            cout << "Die Kapazität wurde auf 5000 mAh begrenzt." <<endl;
        }
        else if (kapazitaet < 0)
        {
            this->kapazitaet = 0;  // Damit keine negative Zahl erlaubt ist 
            cout << "Die Kapazität kann nicht negativ sein. Setze auf 0 mAh." <<endl;
        }
        else
        {
            this->kapazitaet = kapazitaet;
        } 
   } 

void akku::verbraucheKapazitaet(int meter)
    {
        float verbrauch = meter * 300; // 300 mAh pro Meter
        if (kapazitaet >= verbrauch)
        {
            kapazitaet -= verbrauch;
        }
        else
        {
            kapazitaet = 0; // Akku leer
        }
    }
