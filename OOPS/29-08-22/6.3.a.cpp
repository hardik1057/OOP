// WAP to print '*' 80 times if 'n' and character both is not given by function overloading
#include<iostream>
using namespace std;
void display(char c='*',int n=80)
{
	for(int i=0;i<n;i++)
        {
            printf("%c ",c);
        }
}
int main()
{
	char ch;
	int n;
	cout<<"Enter the character- ";
	cin>>ch;
	cout<<"Enter how many times you want to display- ";
	cin>>n;
	display(ch,n);
	cout<<endl;
	display(ch);
	cout<<endl;
	display();
	return 0;
}