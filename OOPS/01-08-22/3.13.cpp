//WAP to check whether a given matrix is orthogonal or not. 
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,size,flag=1;
    cout<<"Enter size of square matrix- ";
    cin>>size;
    int a[size][size],temp[size][size],check[size][size],sum=0;
    cout<<"Enter Elements in matrix- ";
    for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                cin>>a[i][j];
        }
    for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                temp[i][j]=a[j][i];
        }
    for(i=0;i<size;i++)
        {
        for(j=0;j<size;j++)
            {
            for(k=0;k<size;k++)
                {
                    sum+=(a[i][k]*temp[k][j]);
                }
            check[i][j]=sum;
            sum=0;
            }
        }
    for(i=0;i<size;i++)
        {
        for(j=0;j<size;j++)
            {
                if(i==j && check[i][j]!=1)
                    flag=0;
                if(i!=j && check[i][j]!=0)
                    flag=0;
            }
        }
    if(flag==1)
        cout<<"Given Matrix is Orthogonal Matrix\n"; 
    else
        cout<<"Given Matrix is not an Orthogonal Matrix\n";
    return 0;
}