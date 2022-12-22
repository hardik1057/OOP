//WAP to find the trace (sum of the diagonal elements) of a given m*n matrix. 
#include<iostream>
using namespace std;
int main()
{
   int i,j,row,col,sum=0;
   cout<<"Enter the number of Rows- ";
   cin>>row;
   cout<<"Enter the number of Columns- ";
   cin>>col;
   int matrix[row][col];
   for (i=1;i<(row+1);i++) 
       {
          for (j=1;j<(col+1);j++) 
    	    {
                cout<<"Enter element a["<<i<<"]["<<j<<"]- ";
                cin>>matrix[i][j];
            }
       }
   for (i=1;i<(row+1);i++) 
       {
          for (j=1;j<(col+1);j++) 
              {
                if (i==j)
                sum=sum+matrix[i][j];
              }
       }
   cout<<"Trace of the Matrix is- "<<sum;
   return 0;
}