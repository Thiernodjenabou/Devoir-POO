#include <iostream>
#include <vector>
#include <algorithm>
#include <limits> 
using namespace std;

class Traitement {
private:
    vector<int> nombres;

public:
    void Initialise() {
        int nbr;
        int c = 0;

        while (c < 15) {
            cout << "Entrez un entier pair differnt de 0  : ";
            cin >> nbr;

            
            if (cin.fail() || nbr == 0 || nbr % 2 != 0) {
                cin.clear(); 
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
                cout << "Entrer un entier pair non nul." << endl;
            } else {
                nombres.push_back(nbr);
                c++;
            }
        }
    }

    
    void show() const {
        showRecursif(0);
    }

private:
    void showRecursif(int index) const {
        if (index < nombres.size()) {
            cout << nombres[index] << " ";
            showRecursif(index + 1);
        } else {
            cout << endl; 
        }
    }

    
    friend double moyenne(const Traitement& t);
    friend double mediane(const Traitement& t);
};


double moyenne(const Traitement& t) {
    if (t.nombres.empty()) return 0.0;

    double somme = 0;
    for (int nbr : t.nombres) {
        somme += nbr;
    }
    return somme / t.nombres.size();
}


double mediane(const Traitement& t) {
    if (t.nombres.empty()) return 0.0;

    vector<int> temp = t.nombres; 
   sort(temp.begin(), temp.end());
    size_t taille = temp.size();
    
    if (taille % 2 == 0) {
        return (temp[taille / 2 - 1] + temp[taille / 2]) / 2.0;
    } else {
        return temp[taille / 2];
    }
}

int main() {
    Traitement t;
    
    t.Initialise();
    
    cout << "Les nombres entrés sont : ";
    t.show();
    
    cout << "Moyenne : " << moyenne(t) << endl;
    cout << "Mediane : " << mediane(t) << endl;

    return 0;
}






