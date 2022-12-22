// Create two classes which stores distance in feet, inches and meter centimeter format respectively, write a function which compares distace
// in object of these classes and display the larger one
#include <iostream>
using namespace std;
class DB;
class DM
{
    float meter, centimeter;
public:
    DM(float m, float c)
        {
            meter=m;
            centimeter=c;
        }
    friend void compare(DM &x, DB &y);
};
class DB
{
    float inch, feet;
public:
    DB(float f, float i)
        {
            inch=i;
            feet=f;
        }
    friend void compare(DM &, DB &);
};
void compare(DM &a, DB &b)
{
    if((b.feet*0.3048)<a.meter)
        {
            cout<<a.meter<<" meters and "<<a.centimeter<<" centimeters is larger.\n";
        }
    else
        {
            cout<<b.feet<<" feet and "<<b.inch<<" inch is larger.\n";
        }       
}
int main()
{
    float ft, in, met, cm;
    cout<<"Enter distance1 in ft and inches- ";
    cin>> ft>>in;
    cout<<"Enter distance2 in meter and centimeter- ";
    cin>> met>>cm;     
    DM a(met, cm);
    DB b(ft, in);
    compare(a, b);
}