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
   for(i=0;i<n;i++){
      if(*(p+i)%2==0){
         even*=*(p+i);
      }
      else{
         odd*=*(p+i);
      }
   }
   printf("The product of even numbers is : %d\n",even);
   printf("The product of odd numbers is : %d\n",odd);
}