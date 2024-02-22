#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int  age;
	int total_mark;
}a[2];
void main()
{
	for(int i=1;i<=2;i++)
	{
		printf("Enter the name :");
		scanf("%s",&a[i].name);
		printf("Enter the age :");
		scanf("%d",&a[i].age);
		printf("Enter the total mark :\n\n");
		scanf("%d",&a[i].total_mark);
	}
	for(int i=1;i<=2;i++)
	{
		printf("Name :%s\n",a[i].name);
		printf("Age :%d\n",a[i].age);
		printf("Total mark :%d\n",a[i].total_mark);
	}
}
