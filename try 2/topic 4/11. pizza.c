#include <stdio.h>
#define PI 3.14159

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  float  area,  circum,  radius;
  printf("Ka�o� ������ ����� �����?\n");
  n = scanf("%f", &radius);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  area = PI * radius * radius;
  circum = 2.0 * PI * radius;
  printf("������� ��������� ����� �����:\n");
  printf("����a ���������� = %1.2f, ������� = %1.2f\n", circum, area);
  return 0;
}
