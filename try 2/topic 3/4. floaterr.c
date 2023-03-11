/* Cлужит иллюстрацией ошибки округления */

#include <stdio.h>

int main(void)
{
  float a, b;
  b = 2.0e20 + 1.0;  /* 2.0е4 */
  a = b - 2.0e20;
  printf("%f\n", a) ;
  return 0;
}
