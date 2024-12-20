#ifndef POSITION_H
#define POSITION_H

struct koordinaten
{
    // Alle Positionseinheiten in (m)
    int x=0;
    int y=0;
    int z=0;
};

class position 
{
    private:
    koordinaten aktuellPosition;

    public:
    // Getter Methode
    koordinaten getPosition();

    // Setter Methode
    void setPosition(int a, int b, int c);

    //konstruktor
    position(koordinaten pos={0,0,0})
    {
      aktuellPosition=pos;     
    }
};

#endif
