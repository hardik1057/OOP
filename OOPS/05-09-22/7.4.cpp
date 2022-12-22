// create a class complex which stores real and imaginary part of a complex number. include all types of constructor and destructor. thr destructor
// display a message about the destrucote being invoked. create objects using different constructors and display them.
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;
public:
    void display()
    {
        cout << "Real part= " << this->real;
        cout << " Imaginary part= " << this->imaginary << endl;
    }
    Complex(int a, int b)
    {
        this->real = a;
        this->imaginary = b;
        this->display();
    }
    Complex(int a)
    {
        this->real = a;
        this->imaginary = 0;
        this->display();
    }
    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
        this->display();
    }
    ~Complex()
    {
        cout << "Inside Destructor" << endl;
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
    cout << "Complex number 2- ";
    Complex b(x);
    cout << "Complex number 3- ";
    Complex c;
    return 0;
}
