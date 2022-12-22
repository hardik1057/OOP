//WAP to calculate the factorial of a given number. 
#include <iostream>
using namespace std;
int main() 
{
    int n,fact=1;
    cout << "Enter a integer-  ";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else 
        {
            for(int i = 1; i <= n; ++i) 
                {
                    fact *= i;
                }
            cout << "Factorial of " << n << "- " << fact;    
        }
    return 0;
}