#include <stdio.h>

int main(void)
{
    int i = 1, sum = 0;

    while (i <= 10) {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
