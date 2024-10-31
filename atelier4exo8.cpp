#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Fichier{
    private:
    char* p;
    size_t l;

    public:
    Fichier(size_t t) : l(t){
        p = nullptr;
        creation(l);
    }
    void creation(size_t l){
        p = new char[l];
        if(p==nullptr){
            cerr <<"erreur"<<endl;
            exit(EXIT_FAILURE);
        } 
         }
    void remplir(){
        if(p!= nullptr){
            for(size_t i = 0;i<l;++i){
                p[i]='c' + (i % 26);
            }
        }
    }
    void affiche() const{
        if(p!= nullptr){
            cout<<"contenu de la memoire ";
            for(size_t i=0;i<l;++i){
                cout<<p[i];
            }
            cout<<endl;
        }
    }
   
    ~Fichier(){
        delete[] p;
    }
};
int main(){
    size_t t = 5;
    Fichier* f1 = new Fichier(t);
    f1->remplir();
    f1->affiche();

    delete f1;
    return 0;

}