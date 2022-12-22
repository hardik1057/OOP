/*Write a program to define the function template for swapping the two items of various data types such as integers, float and characters etc.*/
#include <iostream>
using namespace std;
template <typename Tp1, typename Tp2>
void swap(Tp1 &a, Tp2 &b)
{
    Tp2 temp = b;
    b = a;
    a = temp;
}
int main()
{
    int x;
    float y;
    cout << "Enter an integer number- ";
    cin >> x;
    cout << "Enter a decimal number- ";
    cin >> y;
    cout << "Before swap x=" << x << " y=" << y << endl;
    swap<int, float>(x, y);
    cout << "After swap x=" << x << " y=" << y << endl;
    return 0;
}