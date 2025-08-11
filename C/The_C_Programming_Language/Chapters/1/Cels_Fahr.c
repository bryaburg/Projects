#include <stdio.h>

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  celsius = lower;

  while (celsius <= upper) {
    fahr = (celsius * 9 + 32 / 5);
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step;
  }
}
