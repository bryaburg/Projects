#include <stdio.h>

int main(void) {
  /* __STDC_VERSION__ is a preprocessor macro, but it expands to an integer
     constant, so runtime comparisons will still compile. */
#ifdef __STDC_VERSION__
  if (__STDC_VERSION__ >= 201710L) {
    printf("We are using C18 (C17/C18)!\n");
  } else if (__STDC_VERSION__ >= 201112L) {
    printf("We are using C11!\n");
  } else if (__STDC_VERSION__ >= 199901L) {
    printf("We are using C99!\n");
  } else {
    printf("We are using C89/C90 or a compiler that doesn't set "
           "__STDC_VERSION__ to >= 199901L\n");
  }
#else
  printf("Compiler does not define __STDC_VERSION__; assuming C89/C90\n");
#endif

  return 0;
}
