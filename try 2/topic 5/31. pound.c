/* ���������� ������� � ����� ���������� */

#include <stdio.h>

void pound(int n); /* �������� ANSI */

int main(void)
{
  int times = 5;
  char ch = '!'; /* ASCII-��� ����� 33 */
  float f = 6.0;
  pound(times); /* �������� ���� int */
  pound(ch); /* ��� char ������������� ���������� � ���� int */
  pound((int) f); /* ���������� ���� f -> int */
  return 0;
}

void pound(int n){
  while (n-- > 0)
    printf("#");
  printf("\n");
}
