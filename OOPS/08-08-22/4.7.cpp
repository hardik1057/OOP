//Create a class which stores x and y coordinates of a point. Calculate distance between two given points and display it.
#include <iostream>
#include<math.h>
using namespace std;
class dist
{
	float x,y;
	  public:
		  void getdata()
        {
          cout<<"Enter x and y coordinates- ";
          cin>>x>>y;
        }
      void display()
        {
          cout<<"("<<x<<","<<y<<")"<<endl;
        }	
      float add(dist a, dist b)
        {
          return sqrt(pow(b.y - a.y, 2) +  pow(b.x - a.x, 2)); 
        }
};
int main()
{
	dist c1,c2;
	c1.getdata();
	c2.getdata();
	cout<<"Coordinate 1- ";
	c1.display();
	cout<<"Coordinate 2- ";
	c2.display();
	c1.add(c1,c2);
	cout<<"Distance between them= "<<c1.add(c1,c2)<<" units"<<endl;
	return 0;
}