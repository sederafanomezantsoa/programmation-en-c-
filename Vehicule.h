#include <iostream>
#include"Moteur.h"
using namespace std;
class Vehicule
{
    private:
        Moteur moteur;/*associé*/
        string Carosserie;
    public:
        void deplacer();
        Vehicule();
        ~Vehicule();
};
