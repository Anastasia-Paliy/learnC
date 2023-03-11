/* Sequence sum and length */

#include <stdio.h>

int main()
{
    int k = 0;
    int s = 0;
    puts("Enter the sequence. Enter any character to end input");

    int x;
    while(scanf("%d", &x)) {
        s += x;
        k++;
    }
    printf("s = %d, k = %d\n", s, k);
    return 0;
}
