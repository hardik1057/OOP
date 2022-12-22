// WAP to find largest element stored in an array.
#include <stdio.h>
int main()
{
    int size, sum=0,max;
    printf("Enter the size of array- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements into array- ");
    max=arr[0];
    for (int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
            if (max<arr[i])
                max=arr[i];
        }
    printf("Largest element in array is- %d ",max);
    return 0;
}