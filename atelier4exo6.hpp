#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point{
    private:
    float x,y;
    public:
    Point (float x=0,float y=0):x(x),y(y) {}
    void deplace(float dx,float dy);
    void affiche();

    
};
#endif