#include <stdio.h>

/* count lines in input */
/* Write a program to count blanks, tabs, and newlines */
/* Write a program to copy its input to its output, replacing each string
of one or more blanks by a single blank. */
/* Write a program to copy its input to its output, replacing each tab
by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way. */

main()
{
  int c, nl, blanks, tabs;
  char text;

  nl = 0;
  blanks = 0;
  tabs = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n') { 
        ++nl;
        if (nl > 1)
    }
    else if (c == ' '){
      ++blanks;
    }
    else if (c == '\t'){
      ++tabs;
    }
  printf("New Lines %d\n Blanks %d\n Tabs %d\n", nl, blanks, tabs);

  return 0;
}
