/* Sum from 1 to 10 */

#include <stdio.h>

int main()
{
    int s;
    int i = 1;
    while(i <= 10) {
        s += i;
        i++;
    }
    printf("%d", s);
    return 0;
}
