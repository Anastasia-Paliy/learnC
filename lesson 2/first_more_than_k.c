/* Index of the first real number more than k */

#include <stdio.h>

int main()
{
    double k, x;
    int n, i;

    printf("Enter k\n");

    n = scanf("%lf", &k);
    if (n != 1) {
        printf("Wrong input (k)\n");
        return 1;
    }

    printf("Enter sequence\n");
    do {
        n = scanf("%lf", &x);
        if (n != 1) {
            printf("Wrong input (x)\n");
            return 2;
        }
        i++;
    } while (x <= k);

    if (x > k) {
        printf("%d\n", i);
    } else {
        printf("Input had been finished before an appropriate number was found\n");
    }

    return 0;
}
