#include <stdio.h>

/* Copy input to output */

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

