#include "atelier4exo6.hpp"
#include<iostream>
using namespace std;

int main(){
    Point p1 = Point(2,3);
    p1.affiche();
    p1.deplace(4,8);
    p1.affiche();
    return 0;
}