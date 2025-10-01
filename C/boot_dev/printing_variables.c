#include <stdio.h>

int main() {
  int max_threads = 8;
  char default_perms = 'r';
  float default_pi = 3.141592;
  char *title = "Title";

  printf("Default max threads: %d\n", max_threads);
  printf(("Custom perms: %c\n", default_perms);
  printf("Constant pi value: %f\n", default_pi);
  printf(" Title: %s\n", title);

  return 0;
}
