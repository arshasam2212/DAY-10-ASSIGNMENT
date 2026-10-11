```c
#include <stdio.h>

int main() {
    int limit, num, temp, digit;
    int digits, sum, power, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers:\n");

    for (num = 1; num <= limit; num++) {
        temp = num;
        digits = 0;

        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            power = 1;

            for (i = 0; i < digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
```