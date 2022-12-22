/*Create a base class called Shape with two data members of double type which could be used to compute the area of figures. Derive two specific 
classes called Triangle and Rectangle from the base class Shape. Add to the base class, a member function called GetData to initialize base class 
data members and another member function displayArea to compute and display the area of figures. Make displayArea a virtual function and redefine 
this function in the derived classes to suit their requirements. Using these three classes design a program which will accept dimensions of a 
triangle or rectangle interactively and display the area. */
#include <iostream>
using namespace std;
class shape
{
protected:
    double a, b;
public:
    void getData(double len, double brd)
    {
        a = len;
        b = brd;
    }
    virtual int displayArea()
    {
        return a * b;
    }
};
class triangle : public shape
{
public:
    int displayArea()
    {
        return 0.5 * a * b;
    }
};
class rectangle : public shape
{
public:
    int displayArea()
    {
        return a * b;
    }
};
int main()
{
    int l, b;
    cout << "enter length breadth:";
    cin >> l >> b;
    triangle t;
    t.getData(l, b);
    cout << "area of triangle is " << t.displayArea();
    rectangle r;
    r.getData(l, b);
    cout << "\narea of rectangle is " << r.displayArea();
    return 0;
}