#include<iostream>
#include"akku.h"
#include"position.h"
#include"drohne.h"
using namespace std;

void drohne::steige(int meter)
{
    if (batterie.getKapazitaet() <= 0)
    {
        cout << "Akku leer! Drohne kann nicht steigen." <<endl;
        return;
    }
    
    batterie.verbraucheKapazitaet(meter); // Akkuverbrauch
    koordinaten pos = drohnenPos.getPosition();
    pos.z += meter;
    drohnenPos.setPosition(pos.x, pos.y, pos.z);
    cout << "Die Drohne steigt " << meter << " m in die Höhe." <<endl;
    
}

void drohne::fliegVorwaerts(int meter)
{
   if (batterie.getKapazitaet() <= 0)
    {
        cout << "Akku leer! Drohne kann nicht nach vorne fliegen." <<endl;
        return;
    }

    batterie.verbraucheKapazitaet(meter); // Akkuverbrauch
    koordinaten pos = drohnenPos.getPosition();
    pos.x += meter;
    drohnenPos.setPosition(pos.x, pos.y, pos.z);
    cout << "Die Drohne fliegt " << meter << " m nach vorne." <<endl;
}

void drohne::fliegLinks(int meter)
{
   if (batterie.getKapazitaet() <= 0)
    {
        cout << "Akku leer! Drohne kann nicht nach links fliegen." <<endl;
        return;
    }

    batterie.verbraucheKapazitaet(meter); // Akkuverbrauch
    koordinaten pos = drohnenPos.getPosition();
    pos.y -= meter;
    drohnenPos.setPosition(pos.x, pos.y, pos.z);
    cout << "Die Drohne fliegt " << meter << " m nach links." <<endl;
}

void drohne::fliegRueckwaerts(int meter)
{
    if (batterie.getKapazitaet() <= 0)
    {
        cout << "Akku leer! Drohne kann nicht rückwärts fliegen." <<endl;
        return;
    }

    batterie.verbraucheKapazitaet(meter); // Akkuverbrauch
    koordinaten pos = drohnenPos.getPosition();
    pos.x -= meter;
    drohnenPos.setPosition(pos.x, pos.y, pos.z);
    cout << "Die Drohne fliegt " << meter << " m rückwärts." <<endl;
}

void drohne::fliegRechts(int meter)
{
    if (batterie.getKapazitaet() <= 0)
    {
        cout << "Akku leer! Drohne kann nicht nach rechts fliegen." <<endl;
        return;
    }

    batterie.verbraucheKapazitaet(meter); // Akkuverbrauch
    koordinaten pos = drohnenPos.getPosition();
    pos.y += meter;
    drohnenPos.setPosition(pos.x, pos.y, pos.z);
    cout << "Die Drohne fliegt " << meter << " m nach rechts." << endl;
}

void drohne::sinke(int meter)
{
    if (batterie.getKapazitaet() <= 0)
    {
        cout << "Akku leer! Drohne kann nicht weiter sinken." <<endl;
        return;
    }

    batterie.verbraucheKapazitaet(meter); // Akkuverbrauch
    koordinaten pos = drohnenPos.getPosition();
    pos.z -= meter;
    drohnenPos.setPosition(pos.x, pos.y, pos.z);
    cout << "Die Drohne sinkt " << meter << " m." <<endl;

    if (pos.z <= 0) // Drohne hat den Boden erreicht
    {
        cout << "Die Drohne hat den Boden erreicht!" <<endl;
    }
}

void drohne::drohneLaden(int mAh)
{
    batterie.setKapazitaet(mAh);
    cout << "Die Drohne wurde mit " << mAh << " mAh geladen." <<endl;
}

void drohne::restKapazitaet()
{
    cout << "Restkapazität der Drohne: " << batterie.getKapazitaet() << " mAh." <<endl;
}

void drohne::aktuellPosition()
{
    koordinaten pos = drohnenPos.getPosition();
    cout << "Aktuelle Position: X=" << pos.x << " m, Y=" << pos.y << " m, Z=" << pos.z << " m." <<endl;
}

drohne::drohne() : batterie(), drohnenPos() {}