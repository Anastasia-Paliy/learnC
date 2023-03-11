/* Age in days */

#include <stdio.h>

int main()
{
    int d, y, n;
    n = scanf("%d", &y);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    d = 365*y;
    printf("%d years is %d days", y, d);
    return 0;
}
