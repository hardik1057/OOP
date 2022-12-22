// WAP to print '*' 80 times if 'n' and character both is not given by default arguments.
#include<iostream>
using namespace std;
void display(char c,int n)
{
	for(int i=0;i<n;i++)
    {
		printf("%c ",c);
	}
}
void display(char c)
{
	for(int i=0;i<80;i++)
        {
            printf("%c ",c);
        }
}
void display()
{
	char c='*';
	for(int i=0;i<80;i++)
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
	cout<<"Enter how many times you want to print- ";
	cin>>n;
	display(ch,n);
	return 0;
}