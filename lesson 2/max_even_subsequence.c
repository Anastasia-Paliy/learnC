/* Number of elements in the longest subsequence of even elements */

#include <stdio.h>

int main()
{
    int n, x;
    int count = 0;
    int m = 0;

    while (1) {
        n = scanf("%d", &x);
        if(n != 1) {
            if (count > m) {
                m = count;
            }
            printf("Max count = %d\n", m);
            return 0;
        }
        if(x%2 == 0) {
            count++;
        } else {
            if (count > m) {
                m = count;
            }
            count = 0;
        };
    };

    return 0;
}
