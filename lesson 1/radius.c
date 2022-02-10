/* Diameter, perimeter, square */

#include <stdio.h>

int main()
{
    double r, d, s, n;
    double pi = 3.14159;
    n = scanf("%lf", &r);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    if(r < 0) {
        printf("Radius can't be negative\n");
        return 2;
    }
    d = 2*r;
    s = r*r*pi;
    printf("P = %.5f, S = %.5f\n", d, s);
    return 0;
}
