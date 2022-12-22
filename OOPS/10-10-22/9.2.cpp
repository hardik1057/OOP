/*Define a class called Complex that stores the real and imaginary part. WAP to add, subtract, divide and multiply two or more complex objects.*/
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
            cin >> real>>imag;
        }
        complex operator+(complex &c)
        {
            complex c1;
            c1.real = real + c.real;
            c1.imag = imag + c.imag;
            return c1;
        }
        complex operator-(complex &c)
        {
            complex c1;
            c1.real = real - c.real;
            c1.imag = imag - c.imag;
            return c1;
        }
        complex operator/(complex &c)
        {
            complex c1;
            float den = pow(real, 2) + pow(c.real, 2);
            c1.real = ((real * c.real) +( imag * c.imag)) / den;
            c1.imag = ((imag * c.real) - (c.imag * real)) / den;
            return c1;
        }
        complex operator*(complex &c)
        {
            complex c1;
            c1.real = (real * c.real) - (imag * c.imag);
            c1.imag = (real * c.imag) + (imag * c.real);
            return c1;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<" i "<<endl;
        }
};
int main()
{
    complex c1, c2, c3;
    c1.get_data();
    c2.get_data();
    cout<< "Complex number 1- ";
    c1.display();
    cout<<"Complex number 2- ";
    c2.display();
    c3 = c1 + c2;
    cout<<"Addition= ";
    c3.display();
    c3 = c1 - c2;
    cout<<"Subtraction= ";
    c3.display();
    c3 = c1 * c2;
    cout<<"Multiplication= ";
    c3.display();
    c3 = c1 / c2;
    cout<<"Division= ";
    c3.display();
    return 0;
}