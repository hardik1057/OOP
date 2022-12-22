#include <stdio.h>
int n; 
struct employee
  {
    int id;
    char name[30];
    int age;
    float basic;
    float gross;
  };
int main()
{
  int i,j;
  printf("Enter total number of employee(s)- ");
  scanf("%d",&n);
  struct employee s['n'];
  for(i=1;i<=n;i++)
    {
      printf("Enter ID of employee %d- ",i);
      scanf("%d",&s[i].id);
      printf("Enter name of employee %d- ",i);
      scanf("%s",s[i].name);
      printf("Enter age of employee %d- ",i);
      scanf("%d",&s[i].age);
      printf("Enter basic salary of employee %d- ",i);
      scanf("%f",&s[i].basic);
    }
  for(i=1;i<=n;i++)
    {
      s[i].gross= s[i].basic+ (0.8)*(s[i].basic) + (0.1)*(s[i].basic);
    }
  for(i=1;i<=n;i++)
    {
      printf("\nID- %d\nName- %s\nAge- %d\nBasic Salary- %.2f\nGross Salary- %.2f",s[i].id,s[i].name,s[i].age,s[i].basic,s[i].gross);
    }
  return 0;
}