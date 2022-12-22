/*Define a class called Point that stores 3 coordinates x, y and z. WAP to overload Increment (++), Decrement (--) and Unary minus (-) operator.*/
#include<iostream>
using namespace std;
class vector
{
	int x,y,z;
	public:
		void get_data()
        {
			cout<<"Enter the x, y,z coordinate- ";
			cin>>x>>y>>z;
		}
		void operator ++(void);
		void operator --(void);
		void operator -()
        {
			x=-x;
			y=-y;
			z=-z;
		}
		void display()
        {
			cout<<"x coordinate- "<<x<<" , y coordinate- "<<y<<" , z coordinate- "<<z<<endl;

		}
};
void vector::operator ++(void)
{
	x=x+1;
	y=y+1;
	z=z+1;
}
void vector::operator --(void)
{
    x=x-1;
    y=y-1;
    z=z-1;
}	
int main()
{
	vector v1;
	v1.get_data();
	cout<<"Vector 1- "<<endl;
	v1.display();
	++v1;
	cout<<"After using increment operator- "<<endl;
	v1.display();
	--v1;
	cout<<"After using decrement operator- "<<endl;
	v1.display();
	-v1;
	cout<<"After using an unary minus operator- "<<endl;
	v1.display();
	return 0;
}
