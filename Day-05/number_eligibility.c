#include <stdio.h>
int main(void)
{
    int marks;
    int fail;
    printf(" enter the marks:");
    scanf("%d",&marks);
    if (marks <0 || marks >100)
    {
        printf("Invalid marks\n");
    }
   else if (marks >= 90 &&marks <= 100)
    {
    printf("%c\n",'A');
    }
    else if (marks >=75  &&marks <= 89)
    {
        printf("%c\n",'B');
    }
    else if  (marks>= 50  &&marks <= 74)
    {
        printf("%c\n", 'C');
    }
    
    else
    {
        printf("fail");
    }
    return 0;
    
}
    

