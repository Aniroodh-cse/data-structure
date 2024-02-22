#include<stdio.h>
#include<string.h>
struct book
{
  char title[50];
  char author[50];
  int price;
}a[3];
void main()
{
  for(int i=1;i<=3;i++)
  {
    printf("Enter the title of the book :\n");
    scanf("%s",a[i].title);
    printf("Enter the author of the book :\n");
    scanf("%s",a[i].author);
    printf("Enter the price of the book :\n");
    scanf("%d",&a[i].price);
  }
  for(int i=1;i<=3;i++)
  {
    printf("Title of the book :%s\n",a[i].title);
    printf("Author of the book :%s\n",a[i].author);
    printf("Price of the book :%d\n",a[i].price);
  }
  if(a[1].price>a[2].price && a[1].price>a[3].price)
  {
    printf("The book with the highest price is %s",a[1].title);
  }
  else if(a[2].price>a[1].price && a[2].price>a[3].price)
  {
    printf("The book with the highest price is %s",a[2].title);
  }
  else
  {
    printf("The book with the highest price is %s",a[3].title);
  }
}