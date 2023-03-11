/* сравнение чисел с плавающей зап€той */

#include <math.h>
#include <stdio.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n;
  const double ANSWER = 3.14159;
  double response;
  printf(" аково значение числа pi?\n");
  n = scanf("%lf", &response);
  if (n != 1){
    printf("Wrong input\n");
    return 1;
  }
  while (fabs(response - ANSWER) > 0.0001)
  {
    printf("¬ведите значение повторно!\n");
    n = scanf("%lf", &response);
    if (n != 1){
      printf("Wrong input\n");
      return 1;
    }
  }
  printf("“ребуема€ точность достигнута!\n");
  return 0;
}
