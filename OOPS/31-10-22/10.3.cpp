//Write a program to illustrate how pointers to a base class is used for both base and derived class
#include <iostream>
using namespace std;
class base
{
private:
	int base_var;
public:
	void get_data()
	{
		cout << "Enter the value- ";
		cin >> base_var;
	}
	void display()
	{
		cout << "Inside Base class\nData inserted- " << base_var << endl;
	}
};
class derived : public base
{
private:
	int derived_var;
public:
	void get_data()
	{
		cout << "Enter the value- ";
		cin >> derived_var;
	}
	void display()
	{
		cout << "Inside Derived class\nData inserted- " << derived_var << endl;
	}
};
int main()
{
	base b;
	base *add = &b;
	cout << "Base class pointer pointing to base class\n";
	add->get_data();
	add->display();
	derived d;
	add = &d;
	cout << "Base class pointer pointing to derived class\n";
	add->get_data();
	add->display();
	return 0;
}