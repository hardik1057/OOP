/*Define a class ABC. Derive two classes BBC and KBC from ABC. All the classes contains same member function name as display)). The base class 
pointer always holds the derived class objects. a) Write a program such that base class pointer or reference will always access/call the base 
version of the members available in derived class, do not have any access to the derived class members. b) Write a program such that base class
 pointer or reference will always access/call the derived version of the members available in derived class, do not have any access to the base 
 class members. Write down the concepts used for bit a) and b) separately. */
#include <iostream>
using namespace std;
class ABC
{
public:
    int a;
    void get_a()
    {
        cout << "Enter value of a- ";
        cin >> a;
    }
    void display()
    {
        cout << "Value of a- " << a << endl;
    }
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
        cout << "Value of a- " << a << " Value of b- " << b << endl;
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
        cout << "Value of a-" << a << " Value of c- " << c << endl;
    }
};
int main()
{
    ABC base;
    BBC derived1;
    derived1.get_a();
    derived1.get_b();
    ABC *bptr1 = &derived1;
    cout << "\nUsing BBC class object\n";
    cout << "dervied1.display- ";
    derived1.display();
    cout << "Using base class pointer pointing to derived BBC class object\n";
    cout << "bptr->display- ";
    bptr1->display();
    KBC derived2;
    derived2.get_a();
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
