#include <stdio.h>

int main(void)
{

  char char_variable = 0;
  unsigned char uchar_variable = 0;
  printf("(signed) char: %d | unsigned char: %d\n", char_variable,uchar_variable);

  char_variable--;
  uchar_variable--;
  printf("decrementing\n");

  printf("(signed) char: %d | unsigned char: %d\n", char_variable,uchar_variable);
  printf("---------------------------------------\n");

  char_variable = 13000;
  uchar_variable = 255;

  printf("(signed) char: %d | unsigned char: %d\n", char_variable,uchar_variable);

  printf("incrementing\n");
  char_variable++;
  uchar_variable++;

  printf("(signed) char: %d | unsigned char: %d\n", char_variable,uchar_variable);
  return 0;
}
