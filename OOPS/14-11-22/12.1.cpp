// define a function template for finding the minimum value contained in an array. Write main functionto find the minimum value of integer 
// and minimum valude of floating point numbers in array
#include <iostream>
using namespace std;
template <typename Temp>
Temp min(Temp *p, int n)
{
    int i;
    Temp low = p[0];
    for (i = 1; i < n; i++)
    {
        if (p[i] < low)
        {
            low = p[i];
        }
    }
    return low;
}
int main()
{
    int arr[5], i;
    cout<<"Enter 5 elements into integer array- ";
    for (i = 0; i < 5; i++)
    {
        cin >>arr[i];
    }
    int lowest = min<int>(arr, 5);
    cout<<"Smallest element present in the integer array is " << lowest;
    float ar[5];
    cout<<"\nEnter 5 elements into float array- ";
    for (i = 0; i < 5; i++)
    {
        cin >>ar[i];
    }
    float lowst = min<float>(ar, 5);
    cout<<"Smallest element present in the float array is "<<lowst;
    return 0;
}