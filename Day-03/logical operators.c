#include <stdio.h>
int main(void)
{
int a=10;
int b=2;
printf("%d\n",a>b && b<a);
printf("%d\n",a<b ||b<a);
printf("%d\n",!(a<b));
return 0;
}
