#include <stdio.h>

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int age, n;
  float assets;
  char pet[30];
  printf("B�e���e ���������� � ����� ��������, � ����� � ����� � � ������� ��������.\n");
  n = scanf("%d %f", &age, &assets);
  if (n != 2){
    printf("Wrong input\n");
    return 1;
  }
  n = scanf("%s", pet);
  if (n != 1){
    printf("Wrong input\n");
    return 2;
  }
  printf("%d $%.2f %s\n", age, assets, pet);
  return 0;
}
