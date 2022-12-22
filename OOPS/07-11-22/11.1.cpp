//WAP to throw and handle 'division by zero' exception
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    try
    {
        cout << "Enter divident- ";
        cin >> a;
        cout << "Enter divisor- ";
        cin >> b;
        if (b == 0)
        {
            throw(b);
        }
        else
        {
            cout << "Dividing- " << a / b;
        }
    }
    catch (float b)
    {
        cout << "Cannot divide because divisor is " << b << endl;
    }
    return 0;
}
