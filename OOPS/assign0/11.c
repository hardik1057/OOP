// WAP to swap two numbers using call by reference.
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers- ");
    scanf("%d%d", &num1, &num2);
    printf("Before Swapping- %d  %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter Swapping- %d  %d\n", num1,num2);
    return 0;
}