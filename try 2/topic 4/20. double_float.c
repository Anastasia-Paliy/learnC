#include <stdio.h>
#include <float.h>

int main()
{
  int n;
  double a;
  float b;

  a = 1.0/3.0;
  b = 1.0/3.0;

  printf("%.4f\n", a);
  printf("%.12f\n", a);
  printf("%.16f\n", a);
  printf("\n");
  printf("%.4f\n", b);
  printf("%.12f\n", b);
  printf("%.16f\n", b);
  printf("\n");
  printf("%f\n", FLT_DIG);
  printf("%f\n", DBL_DIG);

  return 0;
}
