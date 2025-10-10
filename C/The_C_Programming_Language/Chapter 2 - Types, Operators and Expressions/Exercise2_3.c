/* :Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value.
The allowable digits are 0 through 9, a through f, and A through F. */

#include <stdio.h>

int main(void)
{
  int hex;
  printf("Please Enter a hexadecimal hex: ");
  scanf("%x", &hex );
  printf("Decimal equivalent: %d/n", hex);
  return 0;
}
