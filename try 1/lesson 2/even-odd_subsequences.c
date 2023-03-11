/* Number of elements in even/odd subsequences */

#include <stdio.h>

int main()
{
    int previous, current, n;

    printf("Enter sequence\n");

    n = scanf("%d", &previous);
        if (n != 1) {
            printf("Wrong input of the first element\n");
            return 1;
        }
    int count = 1;

    n = scanf("%d", &current);

    if (n != 1) {
        printf("Count = %d\n", count);
        return 0;
    } else {
        if ((current - previous) % 2 == 0) {
            count++;
        } else {
            printf("Count = %d\n", count);
            count = 1;
        }
    }

    while (1) {
        previous = current;
        n = scanf("%d", &current);

        if (n != 1) {
            printf("Count = %d\n", count);
            return 0;
        } else {
            if ((current - previous) % 2 == 0) {
                count++;
            } else {
                printf("Count = %d\n", count);
                count = 1;
            }
        }
    }
    return 0;
}
