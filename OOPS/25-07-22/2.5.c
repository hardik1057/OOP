// to access members of a strucute using pointers
#include<stdio.h>
struct person
{
	int age;
	float weight;
};
void create(struct person *a,int size)
{
	int i;
	for(i=0;i<size;i++)
        {
            printf("Enter the age of the person- ");
            scanf("%d",&a[i].age);
            printf("Enter the weight of the person- ");
            scanf("%f",&a[i].weight);
        }
}
void display(struct person *a,int size)
{
	int i=0;
	for(i=0;i<size;i++)
        {
            printf("\nAge of the person is %d",a[i].age);
            printf(" and Weight of the person is %.2f\n",a[i].weight);
        }
}
int main()
{
	int n;
	printf("Enter number of persons- ");
	scanf("%d",&n);
	struct person society[n];
	create(society,n);
	struct person *pointer=society;
	display(pointer,n);
	return 0;
}