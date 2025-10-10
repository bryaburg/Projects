//Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

 #include <stdio.h>

unsigned int
setbits(unsigned int x, int p, int n, unsigned int y)
{
  unsigned int mask = ~((~0U << n) << (p + 1 - n));
  x &= mask;
  unsigned int y_n_bits = y & ((1U << n) - 1);
  unsigned int shifted_y_bits = y_n_bits << (p + 1 - n);
  return x | shifted_y_bits;
}

