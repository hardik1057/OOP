// wap to increment the value of an argument given to function 
#include<iostream>
using namespace std;
void increment(int &a)
{
	a++;
}
int main()
{
	int n;
	cout<<"Enter number- ";
	cin>>n;
	cout<<"Before increment x= "<<n<<endl;
	increment(n);
	cout<<"After increment x= "<<n;
	return 0;
}