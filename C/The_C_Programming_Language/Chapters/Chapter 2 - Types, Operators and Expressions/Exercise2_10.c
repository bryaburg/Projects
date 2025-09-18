/* Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else. */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int c;

  while ((c = getchar()) !=EOF){
    if (c >= 'A' && c <= 'Z')
      printf("%c", tolower(c));
    else
      printf("%c",c);
  }
}
