#include<stdio.h>
int main()
{
	int *a,count,sum=0;
	printf("Enter the number :");
	scanf("%d",&count);
	a=(int*)malloc(count*sizeof(int));
	for(int i=0;i<count;i++)
	{
		scanf("%d",a+i);
		sum += *(a + i);
	}
	printf("%d",sum);
	free(a);
	return 0;
}