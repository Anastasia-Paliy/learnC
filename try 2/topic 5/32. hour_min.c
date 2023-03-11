/* переводит минуты в часы и минуты */

#include <stdio.h>
#define MIN_PER_HR 60 /* число минут в часе */

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int min, hr, left;
  printf("Перевод минут в часы и минуты!\n");
  printf("Введите количество минут(<=0 для выхода):\n");
  scanf("%d", &min); /* читать количество минут */
  while (min > 0)
  {
    hr = min / MIN_PER_HR; /* усеченное количество часов */
    left = min % MIN_PER_HR; /* число количество в остатке */
    printf("%d минут - это %d часов %d минут.\n", min, hr, left);
    printf("Введите следующее значение(<=0 для выхода):\n");
    scanf("%d", &min);
  }
  printf("Сделано!\n");
  return 0;
}
