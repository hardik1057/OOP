// dynamic memory allocation of structures
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int mark;
	int roll;
};
void display(struct student *a)
{
	printf("Name of the student is- %s",a->name);
	printf(",roll no. of the student is %d and marks scored by the student is %d",a->roll,a->mark);
}
int main()
{
	struct student *details=(struct student *)malloc(sizeof(struct student));
	printf("Enter the name of the student- ");
	scanf("%[^\n]s",&details->name);
	printf("Enter the roll no. of the student- ");
	scanf("%d",&details->roll);
	printf("Enter the marks scored by the student- ");
	scanf("%d",&details->mark);
	display(details);
	return 0;
}