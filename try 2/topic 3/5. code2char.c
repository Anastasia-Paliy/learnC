/* Отображает символ, соответствующий коду */

#include  <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Rus");
  int n;
  char  ch;
  printf("Bвeдитe какой-нибудь код.\n");
  n = scanf("%d", &ch);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;}
  printf("Koд %d соответствует символу %c. \n", ch, ch) ;
  return 0;
}
