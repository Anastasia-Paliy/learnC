/* ��������� ������� � ������ � ������� */

#include <stdio.h>
#define SEC_PER_MIN 60 /* ����� ������ � ������ */

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int sec, min, left;
  printf("������� ������ � ������ � �������!\n");
  printf("������� ���������� ������(<=0 ��� ������):\n");
  scanf("%d", &sec); /* ������ ���������� ������ */
  while (sec > 0)
  {
    min = sec / SEC_PER_MIN; /* ��������� ���������� ����� */
    left = sec % SEC_PER_MIN; /* ����� ���������� � ������� */
    printf("%d ������- ��� %d ����� %d ������.\n", sec, min, left);
    printf("������� ��������� ��������(<=0 ��� ������):\n");
    scanf("%d", &sec);
  }
  printf("�������!\n");
  return 0;
}
