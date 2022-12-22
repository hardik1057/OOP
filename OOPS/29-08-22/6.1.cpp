// wap to find area of circle, rectangle and a triangle using function overloading.
#include<iostream>
using namespace std;
int area(int s)
    {
        return (s *s);
    }
int area(int l, int b)
    {
        return (l*b);
    }
float area(float r)
    {
        return (3.14*r*r);
    }
float area(float bs, float ht)
    {
        return ((bs*ht)/2);
    }
int main()
{
    int side,length,breadth;
    float radius,base,height;
    cout<<"Enter side of a square- ";
    cin>>side;
    cout<<"Enter length and breadth of rectangle- ";
    cin>>length>>breadth;
    cout<<"Enter radius of circle- ";
    cin>>radius;
    cout<<"Enter base and height of triangle- ";
    cin>>base>>height;
    cout<<"Area of square= "<<area(side);
    cout<<"\nArea of rectangle= "<<area(length,breadth);
    cout<<"\nArea of circle= "<<area(radius);
    cout<<"\nArea of triangle= "<<area(base,height);
    return 0;

}