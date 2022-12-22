// WAP to input name, roll number,and marks in 5subjects for a student and display it.
#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    int marks[5];
};
int main ()
{
    struct student s;
    printf("Enter name of the student- ");
    scanf("%[^\n]",s.name);
    printf("Enter roll number of the student-");
    scanf("%d",&s.roll);
    for (int i=0;i<5;i++)
        {
            printf("Enter marks of student in subject %d- ",i+1);
            scanf("%d",&s.marks[i]);
        }
    printf("\nName- %s\nRoll number- %d\n",s.name,s.roll);
    for (int i=0;i<5;i++)
        {
            printf("Marks of student in subject %d is %d\n",i+1, s.marks[i]);
        }
	return 0;
}