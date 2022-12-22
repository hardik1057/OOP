// Create a class distance which stores a distance in feet and inches. Input 2 distance values in objects, add them, store the resultant distance in and object and display it.
// (A)store the resultant distance in the calling object:C3.add(C1,C2)
#include <iostream>
using namespace std;
class distance 
{ 
    int foot, inch; 
public: 
    void input()
    { 
        cout << "Enter distance in foot and inches- ";
        cin >> foot >> inch; 
    } 
    void display() 
    { 
        cout << "The resultant distance is- " << foot << "ft " << inch << "in "<<endl;
    }
    void add(distance d1, distance d2) 
    {
        foot = d1.foot + d2.foot;
        inch = d1.inch + d2.inch;
        while (inch >= 12) 
        { 
            inch -= 12;
            foot += 1;
        } 
    } 
};
int main() 
{ 
    class distance d1, d2, d3;
    d1.input(); 
    d2.input(); 
    d3.add(d1, d2); 
    d3.display();
    return 0;
}