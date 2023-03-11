/* Sequence sum */

#include <stdio.h>

int main()
{
    int n, x, m, s;
    n = scanf("%d", &m);
    if(n != 1) {
        printf("Wrong input (m)\n");
        return 1;
    }
    int i;
    for(i = 1; i <= m; i++) {
        n = scanf("%d", &x);
        if(n != 1) {
            printf("Wrong input (x)\n");
            return 2;
        }
        s += x;
    }
    printf("%d", s);
    return 0;
}
