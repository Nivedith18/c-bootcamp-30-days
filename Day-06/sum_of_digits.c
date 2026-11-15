#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0, n, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = abs(n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
