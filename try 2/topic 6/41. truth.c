/* какие значения обозначают истину? */

#include <stdio.h>

int main(void){
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n = 3;
  while(n)
    printf("%2d есть true\n", n--);
  printf("%2d есть false\n", n);
  n = -3;
  while(n)
    printf("%2d есть true\n", n++);
  printf("%2d есть false\n", n);
  return 0;
}
