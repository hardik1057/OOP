//WAP to multiply two matrices and display it
#include<iostream>
using namespace std;
int main()
{
    int row2,row1,col1,col2,i, j, k, sum=0;
    cout << "Enter number of rows for matrix 1- ";
    cin>>row1;
    cout << "Enter number of columns for matrix 1- ";
    cin>>col1;
    cout << "Enter number of rows for matrix 2- ";
    cin>>row2;
    cout << "Enter number of columns for matrix 2- ";
    cin>>col2;
    int m1[row1][col1];
    int m2[row2][col2];
    int m3[row1][col2];
    if(row2!=col1)
        {
            cout<<"Multiplication cannot be evaluated.\n";
        }
    else
    {
        cout<<"Enter elements for First Matrix- ";
        for(i=0;i<row1;i++)
            {
                for(j=0;j<col1;j++)
                    cin>>m1[i][j];
            }
        cout<<"Enter elements for Second Matrix- ";
        for(i=0;i<row2;i++)
            {
                for(j=0; j<col2; j++)
                    cin>>m2[i][j];
            }
        for(i=0;i<row1;i++)
            {
                for(j=0;j<col2;j++)
                    {
                        sum=0;
                        for(k=0; k<col2; k++)
                            sum=sum+(m1[i][k]*m2[k][j]);
                        m3[i][j]=sum;
                    }
            }
        cout<<"Multiplication Result- \n";
        for(i=0;i<row1;i++)
            {
                for(j=0;j<col2;j++)
                    cout<<m3[i][j]<< "\t";
                cout<<endl;
            }
    }
    return 0;
}