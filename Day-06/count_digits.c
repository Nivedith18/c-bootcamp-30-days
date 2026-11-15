#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = abs(n);

    if (n == 0) {
        printf("Count of digits = 1\n");
    } else {
        while (n > 0) {
            count = count + 1;
            n = n / 10;
        }
        printf("Count of digits = %d\n", count);
    }

    return 0;
}
