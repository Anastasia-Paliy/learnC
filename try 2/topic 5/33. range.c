#include <stdio.h>

int main(void)
{
  int n, start, current;
  n = scanf("%d", &start);
  if (n != 1) {
    printf("Wrong input\n");
    return 1;
  }
  current = start;
  while (current < start + 10)
  {
    current++;
    printf("%d\n", current);
  };
  return 0;
}
