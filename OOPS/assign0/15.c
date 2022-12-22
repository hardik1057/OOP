//Count frequency of each character in a string.
#include <stdio.h>
int count(char *p, char c)
{
    int ctr=0;
    for (int i=0;p[i]!= '\0';i++)
        {
            if (p[i]==c)
                {
                    ctr++;
                    p[i]=' ';
                }
        }
    return ctr;
}
int main()
{
    char str[100];
    printf("Enter a string- ");
    scanf("%[^\n]", str);
    char ch;
    printf("Enter character whose occurrences you want to know- ");
    scanf("%s", &ch);
    int ctr=count(str, ch);
    printf("Number of occurences of %c- %d\n", ch, ctr);
    return 0;
}