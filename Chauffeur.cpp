#include<iostream>
#include"Chauffeur.h";
Chauffeur::Chauffeur(){

}
Chauffeur::~Chauffeur(){

}
void Chauffeur::conduire(Moto m,Vehicule v){
    cout <<"je conduit";
}
void Chauffeur::setPermi()
{
    getline(cin,permi);
}
string Chauffeur::getPermi()
{
    return permi;
}
