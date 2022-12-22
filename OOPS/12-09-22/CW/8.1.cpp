/*Write a program to create a class CIRCLE with one field as radius, used to calculate the area of a Circle. Create another class RECTANGLE
used to calculate the area of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance such that the radius
of circle class can be re-used as length in rectangle class. Take necessary data members and member functions for both the classes to solve
this problem. All the data members are initialized through the constructors. Show the result by accessing the area method of both the classes
 through the objects of rectangle  */
#include <iostream>
using namespace std;
class Circle
{
    protected:
        float radius;
    public:
        void setRadius()
        {
            float radius;
            cout<<"Enter the radius- ";
            cin>>radius;
            this->radius = radius;
        } 
        virtual double getArea()
        {
            return 3.14 * radius * radius;
        }
    };
class Rectangle : public Circle
{
    public:
        int b;
    double getArea() 
        {
            cout<<"\nEnter the breadth- ";
            cin>>b;
            cout<<"Area of rectangle- "; 
            return (radius * b);
        }
};
int main()
{
    Rectangle r;
    int c;
    r.setRadius();
    cout <<"Area of Circle- "<< r.Circle::getArea() ;
    cout<< r.getArea() <<endl;
    return 0;
}
