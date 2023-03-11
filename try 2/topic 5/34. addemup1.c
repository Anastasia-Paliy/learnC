/* находит сумму первых n натуральных чисел */

#include <stdio.h>

int main(void)
{
  int n, count, sum, stop; /* оператор объ€влени€ */
  count = 0; /* оператор присваивани€ */
  sum = 0;  /* то же самое*/
  n = scanf("%d", &stop);
  if (n != 1) {
    printf("Wrong input\n");
    return 1;
  }
  while (count++ < stop) /* оператор цикла while */
    sum = sum + count; /* операторы */
  printf("sum = %d\n", sum); /* оператор вызова функции */
  return 0;
}
