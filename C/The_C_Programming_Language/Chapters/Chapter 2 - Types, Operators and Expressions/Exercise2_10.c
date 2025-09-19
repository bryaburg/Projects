/* Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else. */

#include <stdio.h>

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
  c = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
  return(c);
}

#include <stdio.h>
int main() {
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower k is %c\n", lower('k'));
}