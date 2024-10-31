#include<iostream>
using namespace std;

 class complexe{
    public:
    complexe (float a = 0,float b = 0) : x(a),y(b){}

    void nombre (float x,float y){
        this -> x = x;
        this -> y = y;
    }
    bool egalite(const complexe& c ){
        if(x == c.x && y == c.y){
            return true;
        } else {return false;}
    }

     complexe addition (const complexe& c){
        return complexe(x + c.x ,y + c.y);
     }

     complexe soustraction (const complexe& c){
        return complexe(x - c.x ,y - c.y);
     }

     complexe multiplication (const complexe& c){
        return complexe(x*c.x - y*c.y , x*c.y + y*c.x);
     }

     complexe division (const complexe& c){
        float a ,b , d;
        d=c.x*c.x + c.y*c.y ;
        if(d == 0){
          cout<<"erreur le denominateur ne doit pas etre nul";
          return complexe();
        } else {
            a = (x + c.y + y*c.y)/d;
            b=(c.x*y - x*c.y)/d;
            return complexe(a,b);
        }
     }
        
        void afficher() const{
            if(y < 0){
                cout<<"on obtient le nombre complexe : "<<x<<" - i"<<-y<<endl;
           
            }else{
                cout<<"on obtient le nombre complexe : "<<x<<" + i"<<y<<endl;
            }
        }
    



    private:
    float x,y;

 };

 int main(){
    complexe a1 ,a2 , resultat;
    float x,y;
    int a;
    cout<<"Donner la partie reel :";
    cin>>x;
    cout<<"Donner la partie imaginaire :";
    cin>>y;
    a1.nombre(x,y);
    cout<<"Donner la partie reel :";
    cin>>x;
    cout<<"Donner la partie imaginaire :";
    cin>>y;
    a2.nombre(x,y);
    cout<<"Quelle Operation voulez vous faire !"<<endl;
    cout<<"1-Comparaison"<<endl;
    cout<<"2-Addition"<<endl;
    cout<<"3-Soustration"<<endl;
    cout<<"4-Multiplication"<<endl;
    cout<<"5-Division"<<endl;
    cout<<"Saisisez entre un chiffre 1 et 5"<<endl;
    cin>>a;
    switch(a){
        case 1: 
        if(a1.egalite(a2)){
            cout<<"les deux nombres sont egals !";
        }else{
            cout<<"les deux nombres sont differents !";
        }
        break;
        case 2: 
        resultat = a1.addition(a2);
        resultat.afficher();
        break;
        case 3:
        resultat = a1.soustraction(a2);
        resultat.afficher();
        break;
        case 4 :
        resultat = a1.multiplication(a2);
        resultat.afficher();
        break;
        case 5: 
        resultat = a1.division(a2);
        resultat.afficher();
        break;
        default: cout<<"Vous n'avez pas fait de bon choix !";
        break;
    }
    
 }

 