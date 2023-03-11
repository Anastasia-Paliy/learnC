/* определяет функцию с одним аргументом */

#include <stdio.h>

void cube(float a);

int main(void){
  int n;
  float a;
  n = scanf("%f", &a);
  if (n != 1) {
    printf("Wrong input\n");
    return 1;
  }
  cube(a);
  return 0;
}

void cube(float a){
  printf("%f\n", a*a*a);
}
