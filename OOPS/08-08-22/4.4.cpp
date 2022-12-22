// Create a class complex which stores real and imaginary part of a complex number. Input 10 complex numbers and display them.
#include <iostream>
using namespace std;
class complex
{
    int real;
    int im;
    public:
        void input(void);
        void display(void);
};
void complex::input()
{
    cin>>real>>im;
}
void complex::display()
{
    cout<<real<<"i"<<im<<", ";
}
int main ()
{
    int j;
    complex i[10];
    cout<<"Enter real and imaginary part of complex number followed by a space- "<<endl;
    for(j=0;j<10;j++)
            i[j].input();
    cout<<"Numbers are- "<<endl;
    for(j=0;j<10;j++)
            i[j].display();
    cout<<endl;
    return 0;
}