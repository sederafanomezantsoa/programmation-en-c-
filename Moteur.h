class Moteur
{
    private:

        string carburant;
    public:
        void demarrer(); 
        Moteur();
        ~Moteur(); 
        void setCarburant();
        string getCarburant(); 
};
