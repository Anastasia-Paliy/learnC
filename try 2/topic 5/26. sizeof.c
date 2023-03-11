#include <stdio.h>

int main(void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int n = 0;
  size_t intsize;
  intsize = sizeof (int);
  printf("n = %d, n состоит из %d байтов; все значения int имеют %d байтов.\n", n, sizeof n, intsize );
  return 0;
}
