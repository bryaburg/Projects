#include <stdio.h>

/* count lines in input */
/* Write a program to count blanks, tabs, and newlines */
/* Write a program to copy its input to its output, replacing each string
of one or more blanks by a single blank. */
/* Write a program to copy its input to its output, replacing each tab
by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way. */

int main(void)
{
  int c, nl, blanks, tabs;

  nl = 0;
  blanks = 0;
  tabs = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') { 
        ++nl;
        putchar(c);
    }
    else if (c == ' '){
      ++blanks;
      putchar(c);
    }
    else if (c == '\t'){
      ++tabs;
      putchar(c);
    }
    else {
      putchar(c);
    }
  }
  
  printf("New Lines %d\n Blanks %d\n Tabs %d\n", nl, blanks, tabs);

  return 0;
}
