/* ���������� �������� ���� float ����� ��������� */

#include <stdio.h>

int main (void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  float  aboat = 32000.0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;
  printf("%f ����� ���� �������� ��� %e\n", aboat, aboat);
  printf("%f ����� ���� �������� ��� %e\n", abet, abet);
  printf("%f ����� ���� �������� ��� %e\n", dip, dip);
  return 0;
}
