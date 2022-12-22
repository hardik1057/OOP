// Q2)Write a program to find the addition of two complex number using operator overloading.
#include <iostream>
#include <math.h>
using namespace std;
class complex
{
    float real, imag;
    public:
        void get_data()
        {
            cout << "Enter the real part and imaginary part- ";
            cin >> real >> imag;
        }
        complex operator+(complex &c)
        {
            complex c1;
            c1.real = real + c.real;
            c1.imag = imag + c.imag;
            return c1;
        }
        void display()
        {
            cout << real << " + " << imag << " i " << endl;
        }
};
int main()
{
    complex c1, c2, c3;
    c1.get_data();
    c2.get_data();
    c3 = c1 + c2;
    cout<<"Addition= ";
    c3.display();
    return 0;
}