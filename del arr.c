#include<stdio.h>
int main()
{
	int arr[6]={},n,p;
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position :");
	scanf("%d",&p);
	for(int i=n;i>=p;i--)
	{
		arr[i]=arr[i-1];
	}
	n--;
	for(int i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	return 0;
}