// define a class point that stores the x and y coordinate of the point. wap that uses parameterized constructor for intialising the class
// objects and also display the coordinates.
#include<iostream>
using namespace std;
class Point
{
	private:
		int x,y;
	public:
		Point(int a,int b)
        {
			this->x=a;
			this->y=b;
			cout<<"x coordinate= "<<this->x;
			cout<<"\ny coordinate= "<<this->y;
		}
};
int main()
{
	int a,b;
	cout<<"Enter x coordinate- ";
	cin>>a;
	cout<<"Enter y coordinate- ";
	cin>>b;
	Point p(a,b);
	return 0;
}
