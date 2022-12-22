// WAP to print the numbers which are divisible by 7 and 13 within a range
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a range- ");
    scanf("%d %d",&num1,&num2);
    printf("Numbers divisible by 7& 13 are- ");
    for (int i=num1;i<=num2;i++)
        {
            if (i%7==0 && i%13==0)
                printf("%d, ", i);
        }
    return 0;
}