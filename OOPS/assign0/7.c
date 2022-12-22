// WAP to find the Trace(sum of the diagonal element) of a given mxn matrix .
#include<stdio.h>
int main()
{
   int i,j,row,col,sum=0;
   printf("Enter the number of Rows- ");
   scanf("%d",&row);
   printf("Enter the number of Columns- ");
   scanf("%d",&col);
   int matrix[row][col];
   printf("Enter elements- ");
   for (i=1;i<(row+1);i++) 
       {
          for (j=1;j<(col+1);j++) 
    	    {
                scanf("%d",&matrix[i][j]);
                if (i==j)
                sum=sum+matrix[i][j];
            }
       }
   printf("the trace of matrix is - %d\n",sum);
   return 0;
}