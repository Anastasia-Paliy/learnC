#include <stdio.h>

int main()
{
  int n;
  float height;
  char name[20];
  printf("Enter your height (in inches) and name\n");
  n = scanf("%f", &height);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  n = scanf("%20s", name);
  if (n != 1){
    printf("Wrong input\n");
    return 2;
  }
  printf("%s, your height is %.2f cm", name, height / 2.54);
  return 0;
}
