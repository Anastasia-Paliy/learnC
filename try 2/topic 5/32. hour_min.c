/* ��������� ������ � ���� � ������ */

#include <stdio.h>
#define MIN_PER_HR 60 /* ����� ����� � ���� */

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int min, hr, left;
  printf("������� ����� � ���� � ������!\n");
  printf("������� ���������� �����(<=0 ��� ������):\n");
  scanf("%d", &min); /* ������ ���������� ����� */
  while (min > 0)
  {
    hr = min / MIN_PER_HR; /* ��������� ���������� ����� */
    left = min % MIN_PER_HR; /* ����� ���������� � ������� */
    printf("%d ����� - ��� %d ����� %d �����.\n", min, hr, left);
    printf("������� ��������� ��������(<=0 ��� ������):\n");
    scanf("%d", &min);
  }
  printf("�������!\n");
  return 0;
}
