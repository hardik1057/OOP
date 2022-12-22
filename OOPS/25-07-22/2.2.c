//WAP to illustrate the comparison of structure variables.
#include<stdio.h>
struct student
    {
        char name[20];
        int roll;
        int marks;
    };
void create(struct student *a)
    {
        int i;
        for(i=0;i<2;i++)
            {
                printf("Enter the name of the student- ");
                getchar();
                scanf("%[^\n]s",&a[i].name);
                printf("Enter the roll no. of the student- ");
                scanf("%d",&a[i].roll);
                printf("Enter marks scored by the student- ");
                scanf("%d",&a[i].marks);
            }
    }
void compare(struct student *a)
    {
        int i=0;
        if(a[i].marks>a[i+1].marks)
            {
                printf("\nName of the student is %s",a[i].name);
                printf("\nRoll no. of the student is %d\n",a[i].roll);
            }
        else
            {
                printf("\nName of the student is- %s",a[i+1].name);
                printf("\nRoll no. of the student is- %d\n",a[i+1].roll);
            }
    }
int main()
    {
        struct student com[2];
        create(com);
        compare(com);
        return 0;
    }