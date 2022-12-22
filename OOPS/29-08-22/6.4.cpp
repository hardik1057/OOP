// wap to find square and cube of a number using inline function.
#include <iostream>
using namespace std;
inline int square(int n)
    {
        return n*n;
    }
inline int cube(int n)
    {
        return n*n*n;
    }
int main()
{
    int num, r;
    cout <<"Enter the Number- ";
    cin>>num;
    r=square(num);
    cout<<"Square of "<<num<<"= "<<r<<endl;
    r=cube(num);
    cout<<"Cube of "<<num<<"= "<<r<<endl;
    return 0;
}