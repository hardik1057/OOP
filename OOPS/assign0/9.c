// WAP to find out the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int i, j, row, col,sum=0;
    printf("Enter no of rows- ");
    scanf("%d",&row);
    printf("Enter no of columns- ");
    scanf("%d",&col);
    int arr[row][col], tran[row][col];
    printf("Enter data for matrix- ");
    for(i=0;i<row;i++)
        {
            for(j=0; j<col;j++)
                {
                    scanf("%d",&arr[i][j]);
                    tran[j][i] = arr[i][j];
                }
        }
    printf("Tranpose of matrix is-\n");
    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                printf("%d   ",tran[i][j]);
            printf("\n");
        }
    return 0;
}