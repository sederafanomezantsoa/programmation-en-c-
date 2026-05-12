#include"Vehicule.h"
using namespace std;
class Camion:public Vehicule{ /*herité*/
    private:
        string lourd;
    public:
        Camion();
        ~Camion();
        void setLourd();
        string getLourd();
        void ChargementMax();    
};