/* Отображает кодовое значение символа */

#include  <stdio.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  char ch;
  printf("Bвeдитe какой-нибудь символ.\n");
  n = scanf("%c", &ch);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  printf("Koд символа %с равен %d. \n", ch, ch);
  return 0;
}
