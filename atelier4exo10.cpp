#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class Affichage{
    private:
    int jour,mois,annee,heure,minute;
    public:
    Affichage (const string& date){
        if(date.length() != 12){
            throw invalid_argument("Vous devez entrez 12 chiffres !");
        }
         jour = stoi(date.substr(0, 2));
         mois = stoi(date.substr(2, 2));
         annee = stoi(date.substr(4, 4));
         heure = stoi(date.substr(8, 2));
         minute = stoi(date.substr(10, 2));
         if (jour < 1 || jour > 31 || mois < 1 || mois > 12 || 
            heure < 0 || heure > 23 || minute < 0 || minute > 59) {
            throw invalid_argument("Date ou heure invalide.");
         }
    }
   
        void Afficher() const {
        cout << "Date: " << jour << "/" << mois << "/" << annee << endl;
        cout << "Heure: " << heure << ":" << (minute < 10 ? "0" : "") << minute << endl;
    }
    
};

int main() {
    string date1;

    cout << "Entrez la date et l'heure sous la forme JJMMAAAAHHNN : ";
    cin >> date1;

    try {
        Affichage date(date1);
        date.Afficher();
    } catch (const invalid_argument& e) {
        cerr << "Erreur: " << e.what() << endl;
    }

    return 0;
}

