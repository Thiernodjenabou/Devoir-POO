#include<iostream>
using namespace std;
#include<string>

class Animal{
    public:
    void set_value(string nom,int age){
        this -> nom = nom;
        this -> age = age;
    }
    protected:
    string nom;
    int age;
};
class Zebra:public Animal {
    public:
    void affiche(string origine){
        this -> origine = origine;
        cout<<"Zebra "<<endl;
        cout<<"Nom : "<<nom<<endl;
        cout<<"age : "<<age<<" ans"<<endl;
        cout<<"il vient de  "<<origine<<endl;
    }
    private:
    string origine;

};
class Dolphin:public Animal{
    public:
    void affiche(string origine2){
        this -> origine2 = origine2;
        cout<<"Dolphin  "<<endl;
        cout<<"Nom : "<<nom<<endl;
        cout<<"age : "<<age<<" ans"<<endl;
        cout<<"il vient de l'afrique de "<<origine2<<endl;
    }
     private:
    string origine2;
};

int main(){
    Zebra animal1;
    animal1.set_value("chat",5);
    animal1.affiche("maroc");
    cout<<endl;
    Dolphin animal2;
    animal2.set_value("chiot",5);
    animal2.affiche("senegal");
}