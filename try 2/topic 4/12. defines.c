#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  printf("He�o�op�e ������� ��� ������ �������: \n");
  printf("���������� �������� ���� int: %d \n", INT_MAX);
  printf("���������� �������� ���� long long: %lld \n", LLONG_MIN);
  printf("O��� ���� = %d �������� �  ������ �������.\n", CHAR_BIT);
  printf("���������� �������� ���� double: %e\n", DBL_MAX);
  printf("���������� ���������� �������� ���� float: %e\n", FLT_MIN);
  printf("To��oc�� �������� ���� float = %d ������\n", FLT_DIG);
  printf("�������� �����  1.00  � ����������  ���������  float, �����������  1.00 = %e \n", FLT_EPSILON);
  return 0;
}
