// Create a structure emloyee having another structure address as a data number. Now enter the details of the employee and display them
#include<stdio.h>
struct address
    {
        char city[20];
        int pin;
        long int phn;
    };
struct employee
    {
        struct address details;
    };
void display(struct employee e)
    {
        printf("\nCity where the employee lives %s",e.details.city);
        printf("\nPhone no. of the employee is %ld",e.details.phn);
        printf("\nPin no. of the employee is %d",e.details.pin);
    }
int main()
{
	struct employee e1;
	printf("Enter the city name in which the employee lives- ");
	scanf("%[^\n]s",&e1.details.city);
	printf("Enter the pin no. of city- ");
	scanf("%d",&e1.details.pin);
	printf("Enter the phone no. of the employee- ");
	scanf("%li",&e1.details.phn);
	printf("\nDetails of the employee are- ");
	display(e1);
	return 0;
}