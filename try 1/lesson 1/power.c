/* x**y */

#include<stdio.h>

int main()
{
    int x, y, n;
    int p = 1;
    double t = 1;

    n = scanf("%d %d", &x, &y);
    if(n != 2) {
        printf("Wrong input\n");
        return 1;
    }

    if(y >= 0) {
        while(y > 0) {
            p = p*x;
            y--;
        }
        printf("%d", p);
    } else {
        while(y < 0) {
            t = t/x;
            y++;
        }
        printf("%.3f", t);
    }
    return 0;
}
