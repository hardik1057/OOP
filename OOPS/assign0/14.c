// WAP to find the position of substring in a given string.
#include <stdio.h>
int main()
{
    char str1[80], str2[80];
    int l, i, j;
    printf("Enter first string- ");
    scanf("%[^\n]", str1);
    while (getchar()!='\n');
    printf("Enter second string- ");
    scanf("%[^\n]", str2);
    for (l=0;str2[l]!='\0';l++);
    for (i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++)
        {
            if (str1[i]==str2[j])
                {
                    j++;
                }
            else
                {
                    j=0;    
                }
        }
    if (j==l)
        {
            printf("Substring found at position %d \n", i - j + 1);
        }
    else
        {
            printf("Substring not found");
        }
    return 0;
}