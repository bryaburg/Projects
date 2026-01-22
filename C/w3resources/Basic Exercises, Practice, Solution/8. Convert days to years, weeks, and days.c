#include <stdio.h>

int main(void) {
  int days = 1329;
  int years;
  int weeks;

  while (days != 0) {
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));
    printf("Years %d\n Weeks %d\n Days %d\n", years, weeks, days);
    days = 0;
  }
  return (0);
}
