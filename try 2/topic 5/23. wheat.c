/* экспоненциальный рост*/

#include <stdio.h>
#define SQUARES 64 /* количество квадратов шахматной доски*/
#define CROP 1E15  /* урожай пшеницы в США в зернышках*/

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  double current, total;
  int count = 1;
  printf("квадрат  добавлено    итого        процент от\n ");
  printf(" зерен  зерен                     урожая в США\n");
  total = current = 1.0; /* начинаем с одного зернышка*/
  printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
  while (count < SQUARES)
  {
    count = count + 1;
    current = 2.0 * current;
    /* удвоить количество зерен на следующем квадрате */
    total = total + current; /* обновить итоговую сумму */
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
  }
  printf("Вот и все.\n");
 return 0;
}
