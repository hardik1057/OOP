// create a class which stores time in hh:mm format. include all the constructors. the parameterised constructor should initialize the minute value
// to zero, if it is not provided.
#include <iostream>
using namespace std;
class time
{
private:
    int hour, minutes;
public:
    void display()
    {
        cout<<this->hour<<":"<<this->minutes<<endl;
    }
    time(int a, int b=0)
    {
        this->hour=a;
        this->minutes=b;
        this->display();
    }
    time()
    {
        this->hour=00;
        this->minutes=00;
        this->display();
    }
};
int main()
{
    int h1,m1,h2;
    cout<<"Enter time 1- ";
    cin>>h1>>m1;
    class time t1(h1, m1);
    cout<<"Enter time 2- ";
    cin>>h2;
    class time t2(h2);
    cout<<"Time 3- "<<endl;
    class time t3;
    return 0;
}