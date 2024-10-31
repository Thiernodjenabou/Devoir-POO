#include<iostream>
using namespace std;

class Test {
    private:
    static int n;
    public:
    void call(){
        cout<<"Appelle "<< n<<endl;
        n++;
    }
    static int compteur(){
        return n;
    }

};
int Test::n = 0;
int main(){
    Test ap;
    ap.call();
    ap.call();
    ap.call();
    cout<<"la fonction est appele "<<Test::compteur()<<endl;
   return 0;
}