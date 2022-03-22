#include <stdio.h>


int number_of_spaces(char *s, int index)
{
    int n = 0;
    int i = index;

    while(s[i] != '\0') {
        if(s[i] == ' ') {
            n++;
        }
        i++;
    }
    return n;
}

int main()
{
    int n, index;
    scanf("%d\n", &index);
    char s[10];
    fgets(s, 10, stdin);
    /* puts(s); */
    n = number_of_spaces(s, index);
    printf("%d", n);
    return 0;
}
