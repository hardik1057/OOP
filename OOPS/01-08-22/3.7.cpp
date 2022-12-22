// WAP to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, sum = 0, tsum;
    cout << "Enter the total number of terms- ";
    cin >> n;
    for (i=1;i<=n;i++) 
    	{
            tsum = 0;
            for (j=1;j<=i;j++) 
        		{
                    sum += j;
                    tsum += j;
                    cout << j;
                    if (j < i) 
            			{
                            cout << "+";
                        }
                }
            cout << " = " << tsum << endl;
        }
    cout << "The sum of series is- " << sum << endl;
}