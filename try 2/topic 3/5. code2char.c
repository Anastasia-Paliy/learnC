/* ���������� ������, ��������������� ���� */

#include  <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Rus");
  int n;
  char  ch;
  printf("B�e���e �����-������ ���.\n");
  n = scanf("%d", &ch);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;}
  printf("Ko� %d ������������� ������� %c. \n", ch, ch) ;
  return 0;
}
