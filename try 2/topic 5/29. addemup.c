/* находит сумму первых 20 натуральных чисел */

#include <stdio.h>

int main(void)
{
  int count, sum; /* оператор объ€влени€ */
  count = 0; /* оператор присваивани€ */
  sum = 0;  /* то же самое*/
  while (count++ < 20) /* оператор цикла while */
    sum = sum + count; /* операторы */
  printf("sum = %d\n", sum); /* оператор вызова функции */
  return 0;
}
