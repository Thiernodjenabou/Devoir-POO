#include<iostream>
using namespace std;
struct element{
    int x;
    element* suivant;
    element (int val): x(val) , suivant(nullptr){}
};
  
class Liste {
    private:
    element* tete;
    public:
    Liste() : tete(nullptr) {}

void AjouteDebut(int val) {
        element* nouvelelement = new element(val);
        nouvelelement->suivant = tete; 
        tete = nouvelelement; 
    }


     void SupprimeDebut() {
        if (tete != nullptr) {
            element* temp = tete; 
            delete temp; 
        }
    }
    void Affiche() const {
        element* courant = tete;
        while (courant != nullptr) {
            cout << courant->x << " -> ";
            courant = courant->suivant;
        }
        cout << "nullptr" <<endl; 
    }

    ~Liste() {
        while (tete != nullptr) {
            SupprimeDebut();
        }
    }
};

int main() {
    Liste l1;

  
    l1.AjouteDebut(5);
    l1.AjouteDebut(10);
    l1.AjouteDebut(5);

  
    cout << "Liste apres ajout : ";
    l1.Affiche();

    
    l1.SupprimeDebut();
    cout << "Liste apres suppression du début : ";
    l1.Affiche();

    return 0;
}

