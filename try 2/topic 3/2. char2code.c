/* ���������� ������� �������� ������� */

#include  <stdio.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  char ch;
  printf("B�e���e �����-������ ������.\n");
  n = scanf("%c", &ch);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  printf("Ko� ������� %� ����� %d. \n", ch, ch);
  return 0;
}
