/* Factorial (x!) */

#include <stdio.h>

int main()
{
    int x, n;
    int f = 1;
    n = scanf("%d", &x);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    if(x < 0) {
        printf("Input integer is negative\n");
        return 2;
    } else {
        while(x > 0) {
            f = f*x;
            x--;
        }
        printf("%d", f);
    }
    return 0;
}
