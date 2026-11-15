#include <stdio.h>

int main(void)
{
    int i = 2, sum = 0;

    while (i < 20) {
        sum = sum + i;
        i += 2;
    }

    printf("Sum of even numbers between 1 and 20 = %d\n", sum);
    return 0;
}
