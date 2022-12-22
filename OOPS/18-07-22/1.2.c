#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	int marks[5];
	int total;
	float percentage;
};
void create(struct student *a,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		int j;
		printf("\nEnter the name of the student- ");
		while (getchar()!='\n');
		scanf("%[^\n]s",&a[i].name);
		printf("Enter the roll no. of the student- ");
		scanf("%d",&a[i].roll);
		a[i].total=0;
		for(j=0;j<5;j++)
			{
				printf("Enter marks of the student in subject %d- ",j+1);
				scanf("%d",&a[i].marks[j]);
				a[i].total+=a[i].marks[j];
			}
			float c=1.0*a[i].total;
			a[i].percentage=c/5;
	}
}
void display(struct student *a,int size)
{
	int i;
	for(i=0;i<size;i++)
		{
			int j;
			printf("\nName of the student is %s\n",a[i].name);
			printf("Roll no. of the student is %d\n",a[i].roll);
			printf("Total marks scored by the student is %d\n",a[i].total);
			printf("And percentage obtained by the student is %.2f\n",a[i].percentage);
		}	
}
void range(struct student *a,int size)
{
	int i;
	float low,hg;
	printf("\nEnter the range for the percentage- ");
	scanf("%f %f",&low,&hg);
	for(i=0;i<size;i++)
		{
			if(a[i].percentage>=low && a[i].percentage<=hg)
				{
					printf("\nName of the student is %s",a[i].name);
					printf("\nRoll no. of the student is %d",a[i].roll);
				}
		}
}
void sort(struct student *a,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		int j;
		for(j=1;j<size;j++)
			{
				if(a[i].total>a[j].total)
					{
						struct student temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
			}
	}
}
int main()
{
	int i,n;
	printf("Enter no. of students- ");
	scanf("%d",&n);
	struct student arr[n];
	create(arr,n);
	range(arr,n);
	printf("\n\nBefore sorting the list-");
	display(arr,n);
	sort(arr,n);
	printf("\n\nafter sorting the list-");
	display(arr,n);
	return 0;
}