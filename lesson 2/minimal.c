/* Sequence min */

#include <stdio.h>

int main()
{
    int n, x, k, m;
    n = scanf("%d", &k);
    if(n != 1) {
        printf("Wrong input (k)\n");
        return 1;
    }
    if(k <= 0) {
        printf("Wrong input (k<=0)\n");
        return 2;
    }
    int i;
    for(i = 0; i < k; i++) {
        n = scanf("%d", &x);
        if(n != 1) {
            printf("Wrong input (x)\n");
            return 3;
        }
        if(i == 0) {
            m = x;
            continue;

        }
        if(x < m) {
            m = x;
        };
    }
    printf("%d\n", m);
    return 0;
}
