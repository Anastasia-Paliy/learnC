/* PalindromeQ */

#include <stdio.h>

int main()
{
    int x, n;
    n = scanf("%d", &x);
    if(n != 1) {
        printf("Wrong input\n");
        return 1;
    }
    if(x < 10000){
        printf("The number is not five-digit or negative\n");
        return 1;
    } else {
        if(x/10000 == x%10 && x/1000%10 == x%100/10) {
            printf("Palindrome\n");
        } else {
            printf("Not a palindrome\n");
        }
    }

    return 0;
}
