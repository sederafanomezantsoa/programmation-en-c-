#include"Camion.h"
Camion::Camion(){

}
Camion::~Camion(){
    
}
void Camion::ChargementMax(){
    cout <<"le est charge de transporte le charge max 50tonnes";
}
void Camion::setLourd()
{
    getline(cin,this->lourd);
}
string Camion::getLourd()
{
    return lourd;
}