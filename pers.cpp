#include "pers.h"
#include <iostream>
Personne::Personne(/* args */)
{
}
Personne::~Personne()
{
}
void Personne::sePresenter()
{
    cout <<"______je me presente________\n";
    cout <<"Je m'appelle : " << nom <<" " <<prenoms<<"\n";
    cout <<"j'ai " << age <<" ans\n";
    cout <<"J'habite a : " << adresse <<"\n";
}
void Personne::setNom()
{
    cout <<"setNom : ";
    getline(cin,this->nom);
}
void Personne::setPrenoms()
{
    cout <<"setPrenoms : ";
    getline(cin,this->prenoms);
}
void Personne::setAge()
{
    cout <<"setAge : ";
    cin >> this->age;
    cin.ignore();
}
void Personne::setAdresse()
{
    cout <<"setAdresse : ";
    getline(cin,this-> adresse);
}
string Personne::getNom()
{
    return this-> nom ;
}
string Personne::getPrenoms()
{
    return this-> prenoms ;
}
string Personne::getAdresse()
{
    return this-> adresse ;
}
int Personne::getAge()
{
    return age;
}