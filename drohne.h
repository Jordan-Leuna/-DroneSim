#ifndef DROHNE_H
#define DROHNE_H

#include"akku.h"
#include"position.h"
using namespace std;

class drohne
{
  private:
  akku batterie;
  position drohnenPos;

  public:
  void verbrauch(int );
  void steige(int );
  void sinke(int );
  void fliegVorwaerts(int );
  void fliegRueckwaerts(int );
  void fliegLinks(int );
  void fliegRechts(int );
  void drohneLaden(int );
  void restKapazitaet();
  void aktuellPosition();
  drohne();
};

#endif