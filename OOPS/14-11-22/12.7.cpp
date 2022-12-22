/*Write a program to define a class template for reading two data items from the keyboard and find out their sum. */
#include <iostream>
using namespace std;
template <class T>
class A
{
    T a, b;
public:
    void get(T x, T y)
    {
        a = x;
        b = y;
    }
    T sum()
    {
        return a + b;
    }
};
int main()
{
    A<int> obj;
    int s1,s2;
    cin >>s1>>s2;
    obj.get(s1,s2);
    cout << "Sum of the number is- ";
    int s = obj.sum();
    cout << s << endl;
    return 0;
}