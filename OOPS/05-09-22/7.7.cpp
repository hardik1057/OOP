// wap to demonstrate the order of call of constructors and destructors in class
#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    void display()
    {
        cout << "x coordinate= " << this->x;
        cout << "\ny coordinate= " << this->y << endl;
    }
    Point(int a, int b)
    {
        cout << "Constructor" << endl;
        this->x = a;
        this->y = b;
        this->display();
    }
    ~Point()
    {
        cout << "Destructor ";
    }
};
int main()
{
    int a, b;
    cout << "Enter coordinate of x- ";
    cin >> a;
    cout << "Enter coordinate of y- ";
    cin >> b;
    Point p(a, b);
    return 0;
}