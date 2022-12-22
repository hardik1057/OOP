/*Write a program by modifying LE8.5 b) by making display() as pure virtual function. */
#include <iostream>
using namespace std;
class ABC
{
public:
    virtual void display() = 0;
};
class BBC : public ABC
{
private:
    int b;
public:
    void get_b()
    {
        cout << "Enter value of b- ";
        cin >> b;
    }
    void display()
    {
        cout << "Value of b- " << b << endl;
    }
};
class KBC : public ABC
{
private:
    int c;
public:
    void get_c()
    {
        cout << "Enter value of c- ";
        cin >> c;
    }
    void display()
    {
        cout << "Value of c- " << c << endl;
    }
};
int main()
{
    BBC derived1;
    derived1.get_b();
    ABC *bptr1 = &derived1;
    cout << "\nUsing BBC class object\n";
    cout << "dervied1.display- ";
    derived1.display();
    cout << "Using base class pointer pointing to derived BBC class object\n";
    cout << "bptr->display- ";
    bptr1->display();
    KBC derived2;
    derived2.get_c();
    ABC *bptr2 = &derived2;
    cout << "\nUsing KBC class object\n";
    cout << "dervied2.display- ";
    derived2.display();
    cout << "Using base class pointer pointing to derived KBC class object\n";
    cout << "bptr2->display- ";
    bptr2->display();
    return 0;
}