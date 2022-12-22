// WAP to display the array elements in ascending order.
#include <stdio.h>
int main()
{
    int size, sum=0,temp;
    printf("Enter the size of array- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements into array- ");
    for (int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    for (int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
                {
                    if(arr[i]<arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                }
        }
    printf("The sorted array is- ");
    for(int i=0;i<size;i++)
        {
            printf("%d < ",arr[i]);   
        }
    return 0;
}