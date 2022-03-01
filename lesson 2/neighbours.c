/* Number and Indexes of those elements that are less than their left neighbours */

#include <stdio.h>

int main()
{
    double previous, current;
    int n;
    int count = 0;
    int index = 0;

    printf("Enter sequence\n");

    n = scanf("%lf", &previous);
        if (n != 1) {
            printf("Wrong input (prev)\n");
            return 1;
        }

    n = scanf("%lf", &current);
    index = 1;

    if (n != 1) {
        printf("Count = %d\n", count);
        return 0;
    } else {
        if (current < previous) {
            count++;
            printf("Index = %d\n", index);
        }
    }

    while (1) {
        previous = current;
        n = scanf("%lf", &current);
        index++;

        if (n != 1) {
            printf("Count = %d\n", count);
            return 0;
        } else {
            if (current < previous) {
                count++;
                printf("Index = %d\n", index);
            }
        }
    }
    return 0;
}
