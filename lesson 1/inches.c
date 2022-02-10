/* Inches to centimeters */

#include <stdio.h>

int main()
{
    double c, i;
    int n;
    n = scanf("%lf", &i);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    c = 2.54*i;
    printf("%.3f", c);
    return 0;
}
