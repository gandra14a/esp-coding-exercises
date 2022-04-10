#include <stdio.h>

int main()
{
  // short signed_short = 0;
  // unsigned short unsigned_short = 0;

  // printf("Signed short: %d\n", --signed_short);
  // printf("Unsigned short: %d\n", --unsigned_short);

  // signed_short = 32767;
  // unsigned_short = 65535;

  // printf("Signed short: %d\n", ++signed_short);
  // printf("Unsigned short: %d\n", ++unsigned_short);

  int signed_int = 0;
  unsigned int unsigned_int = 0;

  printf("Signed int: %d\n", --signed_int);
  printf("Unsigned int: %u\n", --unsigned_int);

  signed_int = 2147483647;
  unsigned_int = 4294967295;

  printf("Signed int: %d\n", ++signed_int);
  printf("Unsigned int: %d\n", ++unsigned_int);

  return 0;
}