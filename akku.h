#ifndef AKKU_H
#define AKKU_H

using namespace std;

class akku 
{
    private:

    float kapazitaet; // Die Kapazität in mAh angeben

    public:

    //Getter methode
    float getKapazitaet();

    //Setter Methode
    void setKapazitaet(float kapazitaet);

    //Konstruktor
    akku(float A = 200)
    {
       setKapazitaet(A);    
    }

    // Reduziert die Kapazität des Akkus basierend auf dem Verbrauch
    void verbraucheKapazitaet(int meter);

};

#endif



