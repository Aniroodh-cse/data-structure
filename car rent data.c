#include <stdio.h>
#include <string.h>

struct car
{
    int id;
    char model[50];
    int rate;
} a[3];

int main()
{
  int days,i;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the ID number: ");
        scanf("%d", &a[i].id);
        printf("Enter the model name: ");
        scanf("%s", a[i].model);
        printf("Enter the rate: ");
        scanf("%d", &a[i].rate);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The ID number is: %d\n", a[i].id);
        printf("The model name is: %s\n", a[i].model);
        printf("The rate is: %d\n", a[i].rate);
    }
  printf("Enter the number of days: ");
  scanf("%d",&days);
  int total = days * a[i].rate;
  printf("The total is: %d",total);

}
