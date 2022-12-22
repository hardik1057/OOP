// WAP to create an array that can store max. 50 integers and display the contents of the array
#include <stdio.h>
int arr[50];
void create(int n)
{
    printf("Enter elements into array- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int n)
{
    printf("Entered array is- ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter size of array- ");
    scanf("%d",&size);
    create(size);
    display(size);
}