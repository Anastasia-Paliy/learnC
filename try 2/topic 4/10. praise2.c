#include <stdio.h>
#define PRAISE "����� ���������� ���!"

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  char name[40];
  printf("Ka� ��� �����?\n");
  n = scanf("%s", name);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  printf("������������, %s. %s\n", name, PRAISE);
  printf("Ba�e ��� ������� �� %d �������� � �������� %d ����� ������.\n", strlen(name), sizeof name);
  printf("��������� ����� �������� %d ��������", strlen(PRAISE));
  printf(" � �������� %d ����� ������. \n", sizeof PRAISE);
  return 0;
}
