/* ������� ����� ������ n ����������� ����� */

#include <stdio.h>

int main(void)
{
  int n, count, sum, stop; /* �������� ���������� */
  count = 0; /* �������� ������������ */
  sum = 0;  /* �� �� �����*/
  n = scanf("%d", &stop);
  if (n != 1) {
    printf("Wrong input\n");
    return 1;
  }
  while (count++ < stop) /* �������� ����� while */
    sum = sum + count; /* ��������� */
  printf("sum = %d\n", sum); /* �������� ������ ������� */
  return 0;
}
