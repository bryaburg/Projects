//Count blanks and new lines. We skip tabs because it is a little tricky.

#include <stdio.h>

main() /* count new lines in input */
{
    int c, nl, b;
    nl = 0;
    b = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
        if (c == ' '){
            ++b;
        }
	}
	printf("%d %d\n", b, nl);
  
  return 0;
}