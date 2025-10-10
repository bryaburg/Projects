#include <stdio.h>

/* Copy input to output */
/* Write a program to print the value of EOF */

main()
{
  int c;

  c = getchar();
  while (c != EOF) {
    if (c == 0) {
      printf("c equals 0\n");
    }
    else {
      printf("c equals 1\n");
    }
    putchar(c);
    c = getchar();
  }
}

