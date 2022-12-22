// WAP to add two matrices and display it.  
#include<stdio.h>
int main()
{
    int i, j, row, col;
    printf("Enter no of rows and col- ");
    scanf("%d %d", &row ,&col);
    int m1[row][col], m2[row][col], sum[row][col];
    printf("Enter data for matrix 1- ");
    for(i=0;i<row;i++)
        {
            for(j=0; j<col;j++)
                {
                    scanf("%d",&m1[i][j]);
                }
        }
    printf("Enter data for matrix 2- ");
    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    scanf("%d",&m2[i][j]);
                }
        }
    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    sum[i][j]= m1[i][j]+m2[i][j];
                }
        }
    printf("The sum of 2 matrix is-\n");
    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    printf("%d\t",sum[i][j]);
                }
            printf("\n");
        }
    return 0;
}