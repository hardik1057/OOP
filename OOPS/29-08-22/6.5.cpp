// wap to swap intergers using pass by refernce 
#include <iostream>
using namespace std;
void swap(int &i, int &j) 
{
    int temp=i;
    i=j;
    j=temp;
}
int main() 
{
    int a,b;
    cout<<"Enter two numbers- ";
    cin>>a>>b;
    swap(a, b);
    cout<<"After swapping A is "<<a<<" and B is "<<b<< endl;
    return 0;
}