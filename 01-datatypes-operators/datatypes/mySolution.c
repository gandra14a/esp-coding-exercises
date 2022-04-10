#include <stdio.h>

int main(void)
{
  char c = 0;
  unsigned char uc = 0;
  short s = 0;
  unsigned short us = 0;
  int i = 0;
  unsigned int ui = 0;
  long l = 0;
  unsigned long ul = 0;

  printf("Char: %d\n", --c);
  printf("Unsigned char: %d\n", --uc);
  printf("Short: %hi\n", --s);
  printf("Unsigned short: %hu\n", --us);
  printf("Int: %d\n", --i);
  printf("Unsigned int: %u\n", --ui);
  printf("Long: %d\n", --l);
  printf("Unsigned long: %lu\n", --ul);


  c = 127;
  uc = 255;
  s = 32767;
  us = 65535;
  i = 2147483647;
  ui = 4294967295;
  l = 9223372036854775807;
  ul = 18446744073709551615;

  printf("Char: %d\n", ++c);
  printf("Unsigned char: %d\n", ++uc);
  printf("Short: %hi\n", ++s);
  printf("Unsigned short: %hu\n", ++us);
  printf("Int: %d\n", ++i);
  printf("Unsigned int: %u\n", ++ui);
  printf("Long: %ld\n", ++l);
  printf("Unsigned long: %lu\n", ++ul);

  signed char sc = -130;
  printf("Signed char: %d\n", sc);

  return 0;
}