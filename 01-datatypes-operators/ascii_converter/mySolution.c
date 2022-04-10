#include <stdio.h>

int main(void)
{
  char c;
  int num;

  printf("Insert Character: ");
  scanf("%c", &c);

  printf("Number:           %d\n", c);
  printf("ASCII Character:  %c\n", c);
  printf("----------------------------------\n");
  printf("Insert number: ");
  scanf("%d", &num);
  printf("Number:           %d\n", num);
  printf("ASCII Character:  %c\n", num);

  return 0;

}