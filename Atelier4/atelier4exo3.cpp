#include<iostream>
#include<string>
using namespace std;

class Personne {
    public:
    Personne (string n,string p,
    int d):nom(n),prenom(p),date(d) {}
    
    virtual void afficher(){
        cout<<"Je m'appelle  ";
        cout<<nom<<" "<<prenom<<" je suis nee en "
        <<date<<endl;
    }
    protected:
    string nom;
    string prenom;                                      
    int date;
};
class Employe : public Personne{
    public:
    Employe(string n,string p,int d,float s,string pe)
    : Personne(n,p,d), salaire(s), proprieteE(pe) {}

    void afficher(){
        Personne::afficher();
        cout<<"Je travail chez "<<proprieteE<<" j'ai un salaire de "
        <<salaire<<endl;
    }
    protected:
    float salaire;
    string proprieteE;
};
class Chef :public Employe{
    public:
    Chef (string n,string p,int d,float s,string pe,string se,string pc)
    : Employe(n,p,d,s,pe) , service(se),proprieteC(pc){}
        
    void afficher(){
         Employe::afficher();
        cout<<"Je suis dans le service "<< service<<" qui fait "
        <<proprieteC<<endl;
    }
    protected:
    string service;
    string proprieteC;
    
};
class Directeur:public Chef{
    public:
    Directeur(string n,string p,int d,float s,string pe,string se,string pc,string so,string pd)
    :Chef(n,p,d,s,pe,se,pc) , societe(so),proprieteD(pd){}

     void afficher(){
        Chef::afficher();
        cout<<"Dans la societe "<< societe<<proprieteD<<endl;
    }
    private:
    string societe;
    string proprieteD;
     
};
int main(){
    Directeur directeur("Diallo","Djenab",2024,25000.2,"un bon salaire","acceuil","je fais beaucoup de rencontre","FSTT"," meilleur universite");
    directeur.afficher();
    
    return 0;
}