// wap to find volume of sphere, cylinder, cubiod using function overloading.  
#include<iostream>
using namespace std;
float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
int vol(int a)
    {
        return(a*a*a);
    }
int main()
    {
        int side;
        float radius1,radius2,height;
        cout<<"Enter radius and height of a cylinder- ";
        cin>>radius1>>height;
        cout<<"Enter side of cube- ";
        cin>>side;
        cout<<"Enter radius of sphere- ";
        cin>>radius2;
        cout<<"Volume of cylinder= "<<vol(radius1,height);
        cout<<"\nVolume of cube= "<<vol(side);
        cout<<"\nVolume of sphere= "<<vol(radius2)<<endl;
        return 0;
    }