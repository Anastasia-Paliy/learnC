/* использование цикла for для построения таблицы кубов целых чисел */

#include <stdio.h>

int main(void)
{
  int num;
  printf("    n   n^3\n");
  for (num = 1; num <= 6; num++)
    printf("%5d %5d\n", num, num*num*num);
  return 0;
}
