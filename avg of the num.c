#include<stdio.h>
int main ()
{
 int sum=0, avg, i;
 int n;
 int *p;

 printf ("Enter the number :");
 scanf ("%d",&n);

 p = (int *)malloc(n * 4);

 if (p == NULL)
 {
  exit(0);
 }

 for (i=0;i<n;i++)
 {
  scanf ("%d",&p[i]);

  sum = (sum + p[i]);
 }

 avg = (sum / 2);

 printf ("Average = %d\n\n",avg);

 free (p);
}