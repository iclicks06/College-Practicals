#include <stdio.h>
#include <math.h>

int main()
{
    int num, n, r, digits = 0, sum = 0;

    printf("Enter the value: ");
    scanf("%d", &num);

    for (n = num; n != 0; n /= 10) {
        digits++;
    }

    n = num;

    for (; n != 0; n /= 10) {
        r = n % 10;
        sum += pow(r, 3);

    }

    if (sum == num) {
        printf("%d is an Armstrong number. Sum = %d\n", num, sum);
    } else {
        printf("%d is not an Armstrong number. Sum = %d\n", num, sum);
    }

    return 0;
}
