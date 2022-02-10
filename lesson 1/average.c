/* Returns an arithmetic mean of the five integers from input */

#include <stdio.h>

int main()
{
    int n;
    double a, b, c, d, e, s;
    n = scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    if(n != 5) {
        printf("Wrong input\n");
        return 1;
    }
    s = (a + b + c + d + e)/5;
    printf("%.3f\n", s);
    return 0;
}
