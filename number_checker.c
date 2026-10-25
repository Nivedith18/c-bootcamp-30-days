#include <stdio.h>
int main(void)
{
  int num;
printf("enter num:");
scanf("%d",&num);
if (scanf("%d",&num)!=0)
{
  printf("error input valid");
  return 0;
}
if (num>0)
{
printf("num is positive);
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
