/* ����� ������������������ */

#include <stdio.h>

int main(void){
  int t_ct; // ������� ��������� ������������������
  double time, x;
  int limit;
  printf("������� ����������� ���������� ��������� ������������������: ");
  scanf("%d", &limit);
  for (time=0, x=1, t_ct=1; t_ct <= limit; t_ct++, x *= 2.0)
  {
    time += 1.0/x;
    printf("�����= %f, ����� ���������� ���������= %d.\n", time, t_ct);
  }
  return 0;
}
