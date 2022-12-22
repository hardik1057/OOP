// WAP to multiply two matrices and display it.
#include<stdio.h>
int main ()
{
    int i,j,k,row1,col1,row2,col2, sum;
    printf("Enter no of rows for martix 1- ");
    scanf("%d",&row1);
    printf("Enter no of col for martix 1- ");
    scanf("%d",&col1);
    printf("Enter no of rows for martix 2- ");
    scanf("%d",&row2);
    printf("Enter no of col for martix 2- ");
    scanf("%d",&col2);
    if (row2!=col1)
        {
            printf("Multiplication cannot be carried out.");
        }
    else
        {
            int m1[row1][col2],m2[row2][col2],m3[row1][col2];
            printf("Enter elements for matrix 1- ");
            for (i=0;i<row1;i++)
                {
                    for(j=0;j<col1;j++)
                        {
                            scanf("%d", &m1[i][j]);  
                        }
                }
            printf("Enter elements for matrix 2- ");
            for (i=0;i<row2;i++)
                {
                    for(j=0;j<col2;j++)
                        {
                            scanf("%d", &m2[i][j]);  
                        }
                }
            for (i=0;i<row1;i++)
                {
                    for (j=0;j<col2;j++)
                        {
                            sum=0;
                            for(k=0;k<col2;k++)
                                {
                                    sum=sum+(m1[i][k]*m2[k][j]);
                                    m3[i][j]=sum;
                                }
                        }
                }
            printf("Multiplication result- \n");
            for(i=0;i<row1;i++)
                {
                    for(j=0;j<col2;j++)
                        printf("%d   ",m3[i][j]);
                    printf("\n");
                }            
        }
}