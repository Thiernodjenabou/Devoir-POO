#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3d {
public:
    Vecteur3d(float a = 0, float b = 0, float c = 0)
        : x(a), y(b), z(c) {}

    void afficher() const {
        cout << "Le vecteur est : (" << x << ", " << y << ", " << z << ")" << endl;
    }

    // par valeur
    Vecteur3d sommeval(const Vecteur3d& n) const {
        return Vecteur3d(x + n.x, y + n.y, z + n.z);
    }

    // par adresse
    Vecteur3d* sommeadr(const Vecteur3d* n) const {
        return new Vecteur3d(x + n->x, y + n->y, z + n->z);
    }

    // par référence
    void sommeref(const Vecteur3d& n, Vecteur3d& resultat) const {
        resultat.x = x + n.x;
        resultat.y = y + n.y;
        resultat.z = z + n.z;
    }

    // Produit scalaire
    float produit(const Vecteur3d& n) const {
        return (x * n.x) + (y * n.y) + (z * n.z);
    }

    void coincide(const Vecteur3d& n) const {
        if ((x == n.x) && (y == n.y) && (z == n.z)) {
            cout << "Les vecteurs ont les mêmes composantes" << endl;
        } else {
            cout << "Les vecteurs ont des composantes différentes" << endl;
        }
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    // par valeur
    Vecteur3d comparaisonval(const Vecteur3d& n) const {
        return (this->norme() > n.norme()) ? *this : n;
    }

    // par référence
    const Vecteur3d& comparaisonref(const Vecteur3d& n) const {
        return (this->norme() > n.norme()) ? *this : n;
    }

    // par adresse
    const Vecteur3d* comparaisonadr(const Vecteur3d* n) const {
        return (this->norme() > n->norme()) ? this : n;
    }

protected:
    float x, y, z;
};

int main() {
    Vecteur3d v1(2, 5, 8);
    Vecteur3d v2(3, 6, 9);
    v1.afficher();
    v2.afficher();

    // par valeur
    Vecteur3d somme1 = v1.sommeval(v2);
    somme1.afficher();

    // par adresse
    Vecteur3d* somme2 = v1.sommeadr(&v2);
    somme2->afficher();
    delete somme2;

    // par référence
    Vecteur3d somme3;
    v1.sommeref(v2, somme3);
    somme3.afficher();

    float produit = v1.produit(v2);
    cout << "Le produit scalaire des deux vecteurs : " << produit << endl;

    v1.coincide(v2);

    cout << "La norme du vecteur 1 est " << v1.norme() << endl;
    cout << "La norme du vecteur 2 est " << v2.norme() << endl;

    // par valeur
    Vecteur3d comparaison1 = v1.comparaisonval(v2);
    comparaison1.afficher();

    // par adresse
    const Vecteur3d* comparaison2 = v1.comparaisonadr(&v2);
    comparaison2->afficher();

    // par référence
    const Vecteur3d& comparaison3 = v1.comparaisonref(v2);
    comparaison3.afficher();

    return 0;
}
