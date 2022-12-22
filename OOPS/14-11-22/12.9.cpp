/*Write a program to explain class template by creating a template T for a class named pair having two data members of type T which are inputted 
by a constructor and a member function get-max() return the greatest of two numbers to main. Note: the value of T depends upon the data type 
specified during object creation. */
#include <iostream>
using namespace std;
template <class T>
class paired
{
    T a, b;
public:
    paired(T x, T y)
    {
        a = x;
        b = y;
    }
    T get_max()
    {
        return (a > b) ? a : b;
    }
};
int main()
{
    int x, y;
    cout << "Enter Number 1- ";
    cin >> x;
    cout << "Enter Number 2- ";
    cin >> y;
    paired<int> obj(x, y);
    cout << "Greater number among the 2 numbers is ";
    int s = obj.get_max();
    cout << s << endl;
    return 0;
}