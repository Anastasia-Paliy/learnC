/* ������� ��� � ������� */

#include  <stdio.h>

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n, y;
  double sec;
  printf("B�e���e ������� � �����.\n");
  n = scanf("%d", &y);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;
    }
  sec = y * 31.56;
  printf("��� ������� ���������� %.2f ��� ������. \n", sec) ;
  return 0;
}
