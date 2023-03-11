/* Check whether the sequence is ascending */

#include <stdio.h>

int main()
{
    double previous, current;
    int n;

    printf("Enter sequence\n");

    n = scanf("%lf", &previous);
        if (n != 1) {
            printf("Wrong input (prev)\n");
            return 1;
        }

    n = scanf("%lf", &current);
        if (n != 1) {
            printf("Wrong input (curr)\n");
            return 2;
        }

    while (current >= previous) {
        previous = current;
        n = scanf("%lf", &current);
        if (n != 1) {
            printf("Wrong input (curr)\n");
            return 3;
        }
    }

    if (current >= previous) {
        printf("Ascending = True\n");
    } else {
        printf("Ascending = False\n");
    }

    return 0;
}
