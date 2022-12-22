//WAP to find out the sum of the non-diagonal elements of a matrix. 
#include<iostream>
using namespace std;
int main()
{
   int i, j, row, col,sum = 0;
   cout<<"Enter the number of Rows- ";
   cin>>row;
   cout<<"Enter the number of Columns- ";
   cin>>col;
   int matrix[row][col];
   for(i=0;i<row;i++) 
       {
        	for (j=0;j<col;j++)
            	{
                	cout<<"Enter the Element a["<<(i+1)<<"]["<<(j+1)<<"]- ";
                	cin>>matrix[i][j];
              	}
       }
   for (i=0;i<row;i++)
        {
    		for (j=0;j<col;j++)
        		{
                	if(i!=j)
                	sum = sum + matrix[i][j];
            	}
    	}
   cout<<"Addition of non-diagonal elements in the Matrix is- "<<sum;
    return 0;
}
