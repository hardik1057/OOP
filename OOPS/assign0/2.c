// WAP to find out the sum of the numbers stored in an array of integers.
#include <stdio.h>
int main()
{
    int size, sum=0;
    printf("Enter the size of array- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements into array- ");
    for (int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
            sum=arr[i]+sum;
        }
    printf("The sum of elements in array is- %d ",sum);
    return 0;
}