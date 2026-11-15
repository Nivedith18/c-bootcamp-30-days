#include <stdio.h>

int main(void)
{
    int n, i;
    int fact = 1;

    printf("Enter a non-negative integer (0 to 12): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n > 12) {
        printf("Please enter a number from 0 to 12 for this int-based program.\n");
    } else {
        i = 1;
        while (i <= n) {
            fact = fact * i;
            i++;
        }
        printf("Factorial = %d\n", fact);
    }

    return 0;
}
