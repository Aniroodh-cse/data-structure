#include<stdio.h>
#include<string.h>
struct empl
{
  int id;
  char name[50];
  int salary;
}a[3];
void main()
{
  for(int i=1;i<=3;i++)
  {
    printf("Enter the Id number :");
    scanf("%d",&a[i].id);
    printf("Enter the name :");
    scanf("%s",a[i].name);
    printf("Enter the salary :");
    scanf("%d",&a[i].salary);
  }
  for(int i=1;i<=3;i++)
  {
    printf("ID number :%d\n",a[i].id);
    printf("Name :%s\n",a[i].name);
    printf("Salary :%d\n",a[i].salary);
  }
  if(a[1].salary>a[2].salary && a[1].salary>a[3].salary)
  {
    printf("Highest salary is %d\n",a[1].salary);
  }
  else if(a[2].salary > a[1].salary && a[2].salary > a[3].salary)
  {
    printf("Highest salary is %d\n",a[2].salary);
  }
  else
  {
    printf("Highest salary is %d\n",a[3].salary);
  }
}