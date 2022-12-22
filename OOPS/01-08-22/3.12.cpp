//WAP to check whether a given matrix is symmetric or not. 
#include <iostream>
using namespace std;
int main()
{
    int row, col, i, j, flag = 0;
    cout << "Enter number of rows and columns- ";
    cin >> row >> col;
    int arr[row][col];
    if(row!=col)
        cout<<"Not a symmetric matrix";
    else
    {
        cout << "Enter the values in the matrix- ";
        for (i=0;i<row;i++)
            {
                for (j=0;j<col;j++)
                    {
                        cin>>arr[i][j];
                    }
            }
        cout<<"The entered matrix is- ";
          for(i=0;i<row;i++)
            {
                cout<<endl;
                for(j=0 ; j<col ; j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
            }
        for (i=0;i<row;i++)
            {
                for (j=0;j<col;j++)
                    {
                        if (arr[i][j]!=arr[j][i])
                            {
                                flag=1;
                                break;
                            }
                    }
            }
        if (flag==0)
            cout<<"\nIt's a symmetric matrix";
        else
            cout<<"\nNot a symmetric matrix";
    }
return 0;
}