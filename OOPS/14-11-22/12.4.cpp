/*Write a program to demonstrate the concept behind function templates with non-type as function parameters by taking sorting an array of numbers
 as an examples. */
#include <iostream>
using namespace std;
template <typename Temp>
void sort(Temp *a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                Temp temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n = 5;
    int arr[n];
    cout << "Enter 5 elements into the array- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting- ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    sort<int>(arr, n);
    cout << "\nArray after sorting- ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}