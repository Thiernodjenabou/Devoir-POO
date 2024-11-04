#include<iostream>
#include<string>
using namespace std;

// template <class NombresComplexes> add (&reel,&imaginaire){
    
// }
class NombreComplexe{
    private:
    float reel,imaginaire;
    public:
    NombreComplexe (){}
    NombreComplexe(float reel,float imaginaire) :
     reel(reel),imaginaire(imaginaire){}
     
     void afficher(){
        if(imaginaire > 0){
            cout<<"le nombre complexe est :"<<reel <<" + "
            <<imaginaire<<endl;
        }else{
            cout<<"le nombre complexe est :"<<reel <<" - "
            <<-imaginaire<<endl;
        }
     }

     float operator+(const NombreComplexe& autre){
        return (reel + autre.reel,imaginaire +autre.imaginaire);
     }
     float operator-(const NombreComplexe& autre){
        return (reel - autre.reel,imaginaire -autre.imaginaire);
     }
     float operator*(const NombreComplexe& autre){
        return (reel *autre.reel -autre.imaginaire*imaginaire,reel*autre.imaginaire +autre.imaginaire*imaginaire);
     }
     float operator/(const NombreComplexe& autre){
        float denominateur=autre.reel*autre.reel + autre.imaginaire*autre.imaginaire;
        if(denominateur == 0){
            throw invalid_argument("Erreur le denominateur doit etre different de 0 ");
        }
        reel =(reel *autre.reel -autre.imaginaire*imaginaire)/denominateur;
        imaginaire = (reel*autre.imaginaire +autre.imaginaire*imaginaire)/denominateur;
        return (reel,imaginaire);
     }
 

    bool operator==(const NombreComplexe& autre){
        if (reel == autre.reel && imaginaire==autre.imaginaire)
        {return true;}else return false;
    
    }
    bool operator!=(const NombreComplexe& autre){
        if (reel != autre.reel || imaginaire!=autre.imaginaire)
        {return true;}else return false;
    
    }
    bool operator<(const NombreComplexe& autre){
        if (reel < autre.reel && imaginaire< autre.imaginaire)
        {return true;}else return false;
    
    }
    bool operator>(const NombreComplexe& autre){
        if (reel > autre.reel && imaginaire>autre.imaginaire)
        {return true;}else return false;
    
    }
    bool operator<=(const NombreComplexe& autre){
        if (reel <= autre.reel && imaginaire<=autre.imaginaire)
        {return true;}else return false;
    
    }
    bool operator>=(const NombreComplexe& autre){
        if (reel >= autre.reel && imaginaire>=autre.imaginaire)
        {return true;}else return false;
    
    };
int main(){
    return 0;
}