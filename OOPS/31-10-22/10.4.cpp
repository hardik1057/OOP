/*Write a program to display the contains of an object, when local variable's name is same as member's name by using this pointer.*/
#include <iostream>
using namespace std;
class square
{
    int length;
public:
    void get_data(int length)
    {
        this->length = length;
    }
    void display()
    {
        cout << "Length of the side of the square is " << length << "\nArea of the square is " << length * length << endl;
    }
};
int main()
{
    square s;
    int length;
    cout << "Enter the length of the side of the square- ";
    cin >> length;
    s.get_data(length);
    s.display();
    return 0;
}