#include"Moteur.h"
#include <iostream>
using namespace std;
Moteur::Moteur(){

}
Moteur::~Moteur(){

}
void Moteur::demarrer(){
    cout <<"demmarage du moteur";
}
void Moteur::setCarburant()
{
    getline(cin,carburant);
}
string Moteur::getCarburant()
{
    return carburant ;
}