#include <iostream>
#include <vector>
using namespace std;
class Personne
{
private:
    string nom;
    string prenoms;
    int age;
    string adresse;
public:
    Personne(/* args */);
    ~Personne();
    void setNom();
    void setPrenoms();
    void setAge();
    void setAdresse();
    string getNom();
    string getPrenoms();
    string getAdresse();
    int getAge();
    void sePresenter();
};