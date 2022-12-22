// WAP to find out the sum of the elements stored in a matrix.
#include<stdio.h>
int main()
{
 int i, j, row, col,sum=0;
    printf("Enter no of rows- ");
    scanf("%d",&row);
    printf("Enter no of columns- ");
    scanf("%d",&col); 
    int arr[row][col];
    printf("Enter data for matrix- ");
    for(i=0;i<row;i++)
        {
            for(j=0; j<col;j++)
                {
                    scanf("%d",&arr[i][j]);
                    sum=sum+arr[i][j];
                }
        }
    printf("Sum of elements in the matrix is- %d\n",sum);
}