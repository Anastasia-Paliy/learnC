/* Number of '7' digits in an integer */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, x, n;
    n = scanf("%d", &x);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    x = abs(x);
    while(x > 0) {
        if(x % 10 == 7) {
            c++;
        }
        x = x/10;
    }
    printf("%d", c);
    return 0;
}
