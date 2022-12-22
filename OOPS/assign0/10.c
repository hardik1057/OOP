// WAP to find the factorial of a number n by using a suitable user defined function
#include<stdio.h>
int factorial(int n)
{
    int i, fact=1;
    for (i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    printf("The factorial of number is- %d\n",fact);
}
int main ()
{
    int num;
    printf ("Enter a number- ");
    scanf("%d",&num);
    factorial(num);
    return 0;
}