// define a class called complex that stores real and imaginary part of the complex number. WAP that used overloaded comstructors for initialising
// the class objects and also display the part
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;
public:
    Complex(int a, int b)
    {
        this->real = a;
        this->imaginary = b;
        cout << "Real part= " << this->real;
        cout << " Imaginary part= " << this->imaginary;
    }
    Complex(int a)
    {
        this->real = a;
        this->imaginary = 0;
        cout << "Real part= "<< this->real;
        cout << " Imaginary part= " << this->imaginary;
    }
    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
        cout << "Real part= " << this->real;
        cout << " Imaginary part= " << this->imaginary;
    }
};
int main()
{
    int x, y;
    cout << "Enter real part- ";
    cin >> x;
    cout << "Enter imaginary part- ";
    cin >> y;
    cout << "Complex number 1- ";
    Complex a(x, y);
    cout << "\nComplex number 2- ";
    Complex b(x);
    cout << "\nComplex number 3- ";
    Complex c;
    return 0;
}