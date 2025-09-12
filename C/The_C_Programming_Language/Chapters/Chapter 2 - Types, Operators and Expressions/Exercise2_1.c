/* Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, 
by printing appropriate values from standard headers and by direct computation.
Harder if you compute them: determine the ranges of the various floating-point types */


#include <stdio.h>

int main(void)
{

  char min_unsigned_char = 0;
  char max_unsigned_char = (2 ^ 8);
  printf("The range of unsigned char is from %d to %d\n", min_unsigned_char, max_unsigned_char);

  char min_signed_char = -(1 << (8 - 1));
  char max_signed_char = (1 << (8 - 1))-1;
  printf("The range of signed char is from %d to %d\n", min_signed_char, max_signed_char);

  short min_unsigned_short = (1 >> 1);
  short max_unsigned_short = (1 << 16)-1;
  printf("The range of unsigned short is from %d to %d\n", min_unsigned_short, max_unsigned_short);

  short min_signed_short = -(1 << (16 - 1));
  short max_signed_short = (1 << (16 - 1)) - 1;
  printf("The range of signed short is from %d to %d\n", min_signed_short, max_signed_short);

  int min_unsigned_int = (1 >> 1);
  int max_unsigned_int = (1 << 32)-1;
  printf("The range of unsigned int is from %d to %d\n", min_unsigned_int, max_unsigned_int);

  int min_signed_int = -(1 << (32 - 1));
  int max_signed_int = (1 << (32 - 1)) - 1;
  printf("The range of signed int is from %d to %d\n", min_signed_int, max_signed_int);

  long min_unsigned_long = (1 >> 1);
  long max_unsigned_long = (1 << 64)-1;
  printf("The range of unsigned long is from %d to %d\n", min_unsigned_long, max_unsigned_long);

  long min_signed_long = -(1 << (64 - 1));
  long max_signed_long = (1 << (64 - 1)) - 1;
  printf("The range of signed long is from %d to %d\n", min_signed_long, max_signed_long);
}
