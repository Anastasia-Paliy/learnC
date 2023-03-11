#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  double shoe, foot;
  printf("������ ����� (�������) ����� ������\n");
  shoe = 3.0;
  while (shoe < 18.5)
  {
    foot = SCALE*shoe + ADJUST;
    printf("%10.1f %20.2f ������\n", shoe, foot);
    shoe = shoe + 1.0;
  }
  printf("���� ����� ��������, ������ ��.\n");
  return 0;
}
