/* ��������� ����� �����, �������� � ������������� ������ */

#include <stdio.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  long num;
  long sum = 0L; /* ������������� ���������� sum ����� */
  int status;
  printf("������� ����� ����� ��� ������������ ������������");
  printf("(��� q ��� ���������� ���������): ");
  status = scanf("%ld", &num);
  while (status == 1) /* == ���������� ��������� */
  {
    sum = sum + num;
    printf("������� ��������� ����� �����(��� q ��� ���������� ���������): ");
    status = scanf("%ld", &num);
  }
  printf("����� ��������� ����� ����� ����� %ld.\n", sum);
  return 0;
}
