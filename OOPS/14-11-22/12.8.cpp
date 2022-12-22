/*) Write a class template to represent a generic vector. Include member functions to perform the following tasks: ✓ To create the vector. 
✓ To modify the value of a given element. ✓ To multiply the vector by a scalar value. ✓ To display the vector in the form (10, 20, 30,.....)*/
#include <iostream>
using namespace std;
template <class T, int size>
class vector
{
    T *v;
public:
    vector()
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = 0;
        }
    }
    vector(T value)
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = value;
        }
    }
    void modify(T element)
    {
        T change;
        cout << "Enter the value you want to put instead- ";
        cin >> change;
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (v[i] == element)
            {
                flag = 1;
                v[i] = change;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Element not found";
        }
    }
    void operator*(T value)
    {
        for (int i = 0; i < size; i++)
        {
            v[i] *= value;
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int x;
    cout << "Enter number to intialize the vector- ";
    cin >> x;
    vector<int, 3> v(x);
    cout << "Initial vector- ";
    v.display();
    int m;
    cout << "Enter the number to multiply the elements- ";
    cin >> m;
    v *m;
    cout << "Vector after multiplication- ";
    v.display();
    cout << "Enter the element you want to modify- ";
    cin >> m;
    v.modify(m);
    cout << "\nVector after modification- ";
    v.display();
    return 0;
}