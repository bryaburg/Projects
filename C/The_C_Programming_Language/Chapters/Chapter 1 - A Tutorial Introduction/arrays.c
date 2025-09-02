#include <stdio.h>

/* Count digits, white space, others */

/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging. 
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
*/

int main(void)
{
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else 
      ++nother;

  printf("digits =");
  for (i = 0; i < 10;++i)
    printf("%d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);
}

