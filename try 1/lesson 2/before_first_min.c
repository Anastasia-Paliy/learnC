/* Number of elements before the first minimal element of the sequence */

#include <stdio.h>

int main()
{
    int n, x, m;
    int count = 0;
    n = scanf("%d", &m);
    int i = 1;
    if(n != 1) {
        printf("Wrong input of the first element\n");
        return 1;
    }
    do {
        n = scanf("%d", &x);
        if(n != 1) {
            printf("Count = %d\n", count);
            return 0;
        }
        if(x < m) {
            m = x;
            count = i;
        };
        i++;
    } while (1);

    return 0;
}
