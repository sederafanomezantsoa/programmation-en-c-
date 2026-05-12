#include <iostream>
#include"Moteur.h"
using namespace std;
class Moto
{
    private:
        Moteur moteur ;/*associé*/
    public:
        void traverserEnbouteillage();    
        Moto();
        ~Moto();
        Moteur getMoteur();
        void setMoeur();
};
