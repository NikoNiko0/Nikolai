#include <iostream>

using namespace std;

//Base class

class Shape
{
public:

    //pure virtual function providing interface framework
    virtual float getArea() = 0;

    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setRadius(int r)
    {
        radius = r;
    }

protected:

    int width;
    int height;
    float radius;
};

class Triangle: public Shape
{
public:

    float getArea()
    {
        return(width*height)/2;

    }

};

class Circle: public Shape
{
public:

    float getArea()
    {
        return((22.0/7.0)*radius*radius);
    }
};
int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    Circle Cir;
    Cir.setRadius(4.0);

    //print area of object.

    cout<<"Total Triangle area: "<<Tri.getArea()<<endl;
    cout<<"Total Circle area: "<<Cir.getArea()<<endl;
    return 0;
}
