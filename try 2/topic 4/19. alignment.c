#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  char name[30];
  char surname[30];

  printf("Enter your name and surname\n");
  n = scanf("%30s", &name);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  n = scanf("%30s", &surname);
  if (n != 1){
    printf("Wrong input\n");
    return 2;
  }
  printf("%s %s\n", name, surname);
  printf("%*d %*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
  printf("%s %s\n", name, surname);
  printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
  return 0;
}
