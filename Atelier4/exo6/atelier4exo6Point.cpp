#include "atelier4exo6.hpp"
#include<iostream>
using namespace std;
void Point:: deplace(float dx,float dy){
    x += dx;
    y += dy;
}
void Point:: affiche(){
    cout<<"Les coordonnees cartesiennes du point sont ("<<x
    <<" , "<<y<<")"<<endl;
}
