#include <stdio.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  char name[20];
  char surname[20];
  printf("Enter your name and surname\n");
  n = scanf("%20s", name);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  n = scanf("%20s", surname);
  if (n != 1){
    printf("Wrong input\n");
    return 2;
  }
  printf("%s, %s", surname, name);
  return 0;
}
