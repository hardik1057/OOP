// create a class which stores a sting and its length as data members. inculde all the constructors. include a member function to join two things.
// and display the concatenated string.
#include <iostream>
#include <string>
using namespace std;
class A
{
private:
    int n;
    string s;
public:
    void display()
    {
        cout << "The string is- " << s << " and its length is- " << n << endl;
    }
    A(string a)
    {
        s = a;
        int count = 0;
        for (int i = 0; a[i] != '\0'; i++)
        {
            count++;
        }
        n= count;
    }
    void join(A a)
    {
        cout << "The concatenated string is- " << s.append(a.s);
    }
};
int main()
{
    A a("Hello");
    a.display();
    A b(" world");
    b.display();
    a.join(b);
    return 0;
}
