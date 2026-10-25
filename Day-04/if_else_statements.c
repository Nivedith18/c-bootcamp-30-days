#include <stdio.h>
int main(void)
{
  int num;
printf("enter num:");
  if (scanf("%d",&num)!=1)
{
  printf("Invalid input");
  return 1;
}
if (num>0)
{
printf("num is positive");
}
  else if (num<0)
{
printf("num is negative");
}
else
{
printf("num is zero");
}
return 0;
}
