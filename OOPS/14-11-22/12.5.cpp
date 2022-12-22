/*Write a program to demonstrate the concept behind function templates with non-type as template parameters by taking sorting an array of numbers 
as an examples. */
#include <iostream>
using namespace std;
template <typename Temp, int size>
void sort(Temp *a)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                Temp tep = a[i];
                a[i] = a[j];
                a[j] = tep;
            }
        }
    }
}
int main()
{
    int arr[5];
    cout << "Enter 5 elements into the array- ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting- ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    sort<int, 5>(arr);
    cout << "\nArray after sorting- ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}