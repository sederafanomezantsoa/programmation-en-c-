#include <iostream>
#include "pers.h"
using namespace std;
vector <Personne> Allpers;
int main()
{
    Personne p1 = Personne();
    p1.setNom();
    p1.setPrenoms();
    p1.setAge();
    p1.setAdresse();
    Allpers.push_back(p1);
    Personne p2 = Personne();
    p2.setNom();
    p2.setPrenoms();
    p2.setAge();
    p2.setAdresse();
    Allpers.push_back(p2);

    Personne *p3 =  new Personne();
    p3 -> setNom();
    p3 -> setPrenoms();
    p3 -> setAge();
    p3 -> setAdresse();
    Allpers.push_back(*p3);
    Personne *p4 = new Personne();
    p4 -> setNom();
    p4 -> setPrenoms();
    p4 -> setAge();
    p4 -> setAdresse();
    Allpers.push_back(*p4);

    for(Personne p:Allpers)
    {
        p.sePresenter();
    }
return 1;
}
