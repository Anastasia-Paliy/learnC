#include <stdio.h>
#define PRAISE "Какое прекрасное имя!"

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  char name[40];
  printf("Kaк вас зовут?\n");
  n = scanf("%s", name);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  printf("Здравствуйте, %s. %s\n", name, PRAISE);
  return 0;
}
