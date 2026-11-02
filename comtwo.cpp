#include<iostream>
using namespace std;
class shape
{
    public:
    virtual float area()=0; 

};
class circle:public shape
{
    float radius;
    public:
    circle(float r)
    {
        radius=r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
};
class rectangle:public shape
{
    float length,breadth;
    public:
    rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
};
class triangle:public shape
{
    float base,height;
    public:
    triangle(float b,float h)
    {
        base=b;
        height=h;
    }
    float area()
    {
        return 0.5*base*height;
    }
};
int main()
{
    shape *s;
    circle c(3);
    rectangle r(20,20);
    triangle t(20,10);
    s=&c;
    cout<<"Area of circle: "<<s->area()<<endl;
    s=&r;
    cout<<"Area of rectangle: "<<s->area()<<endl;
    s=&t;
    cout<<"Area of triangle: "<<s->area()<<endl;
    return 0;
}
