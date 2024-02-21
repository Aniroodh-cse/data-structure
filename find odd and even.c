#include<stdio.h>
int main(){
   
   int i,n;
   int *p;
   int even=0,odd=0;
   p=(int *)malloc(n*sizeof(int));
   printf("Enter the number of elements : ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",p+i);
   }
      for(int i=0;i<n;i++)
      {
      	if(*(p+i)%2==0)
      	{
      		even++;
		  }
		  else
		  {
		  	odd++;
		  }
		  
	  }
	    printf("The even numbers are :%d\n",even);
		printf("The odd numbers are :%d\n",odd);
	  return 0;
}