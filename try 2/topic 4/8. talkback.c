#include <stdio.h>
#include <string.h> /* для прототипа  функции  strlen()*/
#define DENSITY 62.4  /* плотность  человека в фунтах на кубический фут */

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  float  weight, volume;
  int n, size, letters;

  char  name[40];  /*  имя  представляет  собой  массив из 40 символов */
  printf("Здравствуйте! Как вас зовут?\n");
  n = scanf("%s", name);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;
    }
  printf("%s, сколько вы  весите в фунтах?\n", name);
  n = scanf("%f", &weight);
  if(n != 1) {
    printf("Wrong input\n");
    return 1;
    }
  size =  sizeof name;
  letters = strlen(name);
  volume =  weight/DENSITY;
  printf("Xopoшo, %s, ваш объем составляет %2.2f  кубических футов.\n", name, volume);
  printf("К тому же ваше  имя  состоит  из  %d  символов, \n", letters);
  printf ("и мы  располагаем %d байтами  для его сохранения.\n", size);
  return 0;
}
