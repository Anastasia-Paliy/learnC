#include <stdio.h>

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    printf("�������� ASCII ��� %c ����� %d.\n", ch, ch);
  return 0;
}
