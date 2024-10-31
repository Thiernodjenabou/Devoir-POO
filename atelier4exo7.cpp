#include<iostream>
#include<vector>
using namespace std;

class Pile{
    private:
    vector<int> element;
    public:
    Pile (){}

    void empiler(int x){
        element.push_back(x);
        cout<<"Ajout de l'element "<<x<<" dans la pile"<<endl;
    }
    void depiler(){
        if(element.empty()){
            cout<<"Impossible de depiler la liste est vide";
        }else{
            int x =element.back();
             element.pop_back();
             cout<<"Retrait de l'element "<<x<<" dans la pile"<<endl;
        }
    }

    void afficher(){
        if(element.empty()){
            cout<<"la pile est vide !"<<endl;
        }else{
            for(int a : element){
                cout<<a<<" ";
            }
        }
        cout<<endl;
    }
};
int main(){
    Pile p1,p2;
    p1.afficher();
    p2.afficher();
    p1.empiler(2);
    p1.empiler(4);
    p1.empiler(7);
    p1.empiler(9);
    p2.empiler(6);
    p2.empiler(4);
    p2.empiler(1);
    p2.empiler(0);
    p1.afficher();
    p2.afficher();
    p1.depiler();
    p1.depiler();
    p2.depiler();
    p2.depiler();
    p1.afficher();
    p2.afficher();
    return 0;
}
