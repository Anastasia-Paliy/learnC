#include <stdio.h>

void temperatures(double f);

int main(void){
  int n;
  double f;
  n = scanf("%f", &f);
  while (n == 1)
  {
    temperatures(f);
    n = scanf("%f", &f);
  }
  return 0;
}

void temperatures(double f){
  const double K = 1.8;
  const double A = 32.0;
  const double B = 273.16;
  double c, k;
  c = K * f + A;
  k = c + B;
  printf("%.2f\n", f);
  printf("%.2f\n", c);
  printf("%.2f\n", k);
}
