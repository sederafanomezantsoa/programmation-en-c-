#include<iostream>
#include"Personne.h";
#include"Moto.h";
#include"Vehicule.h";
using namespace std;
class Chauffeur:public Personne /*herité*/
{
private:
    string permi;
public:
    Chauffeur();
    ~Chauffeur();
    void setPermi();
    string getPermi();
    void conduire(Moto m, Vehicule v);/*use*/
};