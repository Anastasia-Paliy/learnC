/* Parity check for an integer */

#include <stdio.h>

int main()
{
    int a, n;
    n = scanf("%d", &a);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    if(a % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}
