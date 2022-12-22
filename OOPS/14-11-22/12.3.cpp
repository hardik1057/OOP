/*Write a template function to search for a given key element from an array. Illustrate how you perform search in integer, character as well as 
double arrays using the same template function.*/
#include <iostream>
using namespace std;
template <typename Temp>
void search(Temp *a, int n)
{
    int flag = 0;
    Temp key;
    cout << "Enter the number to be searched- ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            cout << "Number found at index " << i << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number not found" << endl;
    }
}
int main()
{
    int arr[5];
    cout << "Enter 5 elements into integer array- ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    search<int>(arr, 5);
    return 0;
}