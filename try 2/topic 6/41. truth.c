/* ����� �������� ���������� ������? */

#include <stdio.h>

int main(void){
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n = 3;
  while(n)
    printf("%2d ���� true\n", n--);
  printf("%2d ���� false\n", n);
  n = -3;
  while(n)
    printf("%2d ���� true\n", n++);
  printf("%2d ���� false\n", n);
  return 0;
}
