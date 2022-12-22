//Write a simple program to illustrate the method of sending an entire structure as a parameter to a function.
#include<stdio.h>
struct student
{
	char name[20];
	int roll_no;
	int marks;
};
void create(struct student *a,int size)
{
	int i;
	for(i=0;i<size;i++)
        {
            printf("Enter the name of the student- ");
            getchar();
            scanf("%[^\n]s",&a[i].name);
            printf("Enter the roll no. of the student- ");
            scanf("%d",&a[i].roll_no);
            printf("Enter marks scored by the student- ");
            scanf("%d",&a[i].marks);
        }
}
void display(struct student *a,int size)
    {
        int i=0;
        for(i=0;i<size;i++)
            {
                printf("\nName of the student is- %s",a[i].name);
                printf("\nThe roll no. of the student is- %d",a[i].roll_no);
                printf("\nAnd marks scored by the student is- %d\n",a[i].marks);
            }
    }
int main()
{
	int n;
	printf("Enter the number of students- ");
	scanf("%d",&n);
	struct student school[n];
	create(school,n);
	display(school,n);
	return 0;
}
