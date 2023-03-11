#include <stdio.h>
#include <string.h> /* ��� ���������  �������  strlen()*/
#define DENSITY 62.4  /* ���������  �������� � ������ �� ���������� ��� */

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  float  weight, volume;
  int n, size, letters;

  char  name[40];  /*  ���  ������������  �����  ������ �� 40 �������� */
  printf("������������! ��� ��� �����?\n");
  n = scanf("%s", name);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;
    }
  printf("%s, ������� ��  ������ � ������?\n", name);
  n = scanf("%f", &weight);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;
    }
  size =  sizeof name;
  letters = strlen(name);
  volume =  weight/DENSITY;
  printf("Xopo�o, %s, ��� ����� ���������� %2.2f  ���������� �����.\n", name, volume);
  printf("� ���� �� ����  ���  �������  ��  %d  ��������, \n", letters);
  printf ("� ��  ����������� %d �������  ��� ��� ����������.\n", size);
  return 0;
}
