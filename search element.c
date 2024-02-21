#include<stdio.h>
int main()
{
	int *p,arr[5]={1,2,3,4,5},n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(n==arr[i])
		{
			printf("Element are found at %d ",i);
		}
	}
	return 0;
}