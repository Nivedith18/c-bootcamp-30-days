#include <stdio.h>
int main(void)
{
int num;
printf("enter the num : ");
scanf("%d",&num);
if (num >=10 && num <=100)
{
printf("num is in range");
else
{
printf("num is out of range");
}
return 0;
}
