#include <stdio.h>

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n = 0;
  size_t intsize;
  intsize = sizeof (int);
  printf("n = %d, n ������� �� %d ������; ��� �������� int ����� %d ������.\n", n, sizeof n, intsize );
  return 0;
}
