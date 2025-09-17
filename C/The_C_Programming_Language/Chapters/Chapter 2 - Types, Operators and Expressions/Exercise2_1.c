/* Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, 
by printing appropriate values from standard headers and by direct computation.
Harder if you compute them: determine the ranges of the various floating-point types */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

// Helper to print binary representation
void print_binary(unsigned long long value, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%c", (value & (1ULL << i)) ? '1' : '0');
        if (i % 8 == 0 && i != 0) printf(" "); // group by bytes
    }
    printf("\n");
}

// Compute max float by multiplying until INF
float compute_float_max() {
    float f = 1.0f;
    float prev = f;
    while (!isinf(f)) {
        prev = f;
        f *= 2.0f;
    }
    return prev;
}

// Compute min positive float by dividing until zero
float compute_float_min() {
    float f = 1.0f;
    float prev = f;
    while (f > 0.0f) {
        prev = f;
        f /= 2.0f;
    }
    return prev;
}

// Same for double
double compute_double_max() {
    double d = 1.0;
    double prev = d;
    while (!isinf(d)) {
        prev = d;
        d *= 2.0;
    }
    return prev;
}

double compute_double_min() {
    double d = 1.0;
    double prev = d;
    while (d > 0.0) {
        prev = d;
        d /= 2.0;
    }
    return prev;
}

// Same for long double
long double compute_long_double_max() {
    long double ld = 1.0L;
    long double prev = ld;
    while (!isinf(ld)) {
        prev = ld;
        ld *= 2.0L;
    }
    return prev;
}

long double compute_long_double_min() {
    long double ld = 1.0L;
    long double prev = ld;
    while (ld > 0.0L) {
        prev = ld;
        ld /= 2.0L;
    }
    return prev;
}

int main(void)
{
    printf("Ranges using <limits.h>:\n");
    printf("Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("  Min binary: "); print_binary((unsigned char)SCHAR_MIN, sizeof(char)*8);
    printf("  Max binary: "); print_binary((unsigned char)SCHAR_MAX, sizeof(char)*8);

    printf("Unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("  Min binary: "); print_binary(0, sizeof(char)*8);
    printf("  Max binary: "); print_binary(UCHAR_MAX, sizeof(char)*8);

    printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("  Min binary: "); print_binary((unsigned short)SHRT_MIN, sizeof(short)*8);
    printf("  Max binary: "); print_binary((unsigned short)SHRT_MAX, sizeof(short)*8);

    printf("Unsigned short: 0 to %u\n", USHRT_MAX);
    printf("  Min binary: "); print_binary(0, sizeof(short)*8);
    printf("  Max binary: "); print_binary(USHRT_MAX, sizeof(short)*8);

    printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("  Min binary: "); print_binary((unsigned int)INT_MIN, sizeof(int)*8);
    printf("  Max binary: "); print_binary((unsigned int)INT_MAX, sizeof(int)*8);

    printf("Unsigned int: 0 to %u\n", UINT_MAX);
    printf("  Min binary: "); print_binary(0, sizeof(int)*8);
    printf("  Max binary: "); print_binary(UINT_MAX, sizeof(int)*8);

    printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("  Min binary: "); print_binary((unsigned long)LONG_MIN, sizeof(long)*8);
    printf("  Max binary: "); print_binary((unsigned long)LONG_MAX, sizeof(long)*8);

    printf("Unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("  Min binary: "); print_binary(0, sizeof(long)*8);
    printf("  Max binary: "); print_binary(ULONG_MAX, sizeof(long)*8);

    printf("\nRanges by direct computation:\n");
    char schar_min = -(1 << (sizeof(char)*8-1));
    char schar_max = (1 << (sizeof(char)*8-1)) - 1;
    unsigned char uchar_max = (unsigned char)~0;
    printf("Signed char: %d to %d\n", schar_min, schar_max);
    printf("  Min binary: "); print_binary((unsigned char)schar_min, sizeof(char)*8);
    printf("  Max binary: "); print_binary((unsigned char)schar_max, sizeof(char)*8);

    printf("Unsigned char: 0 to %u\n", uchar_max);
    printf("  Min binary: "); print_binary(0, sizeof(char)*8);
    printf("  Max binary: "); print_binary(uchar_max, sizeof(char)*8);

    short sshort_min = -(1 << (sizeof(short)*8-1));
    short sshort_max = (1 << (sizeof(short)*8-1)) - 1;
    unsigned short ushort_max = (unsigned short)~0;
    printf("Signed short: %d to %d\n", sshort_min, sshort_max);
    printf("  Min binary: "); print_binary((unsigned short)sshort_min, sizeof(short)*8);
    printf("  Max binary: "); print_binary((unsigned short)sshort_max, sizeof(short)*8);

    printf("Unsigned short: 0 to %u\n", ushort_max);
    printf("  Min binary: "); print_binary(0, sizeof(short)*8);
    printf("  Max binary: "); print_binary(ushort_max, sizeof(short)*8);

    int sint_min = -(1 << (sizeof(int)*8-1));
    int sint_max = (1 << (sizeof(int)*8-1)) - 1;
    unsigned int uint_max = (unsigned int)~0;
    printf("Signed int: %d to %d\n", sint_min, sint_max);
    printf("  Min binary: "); print_binary((unsigned int)sint_min, sizeof(int)*8);
    printf("  Max binary: "); print_binary((unsigned int)sint_max, sizeof(int)*8);

    printf("Unsigned int: 0 to %u\n", uint_max);
    printf("  Min binary: "); print_binary(0, sizeof(int)*8);
    printf("  Max binary: "); print_binary(uint_max, sizeof(int)*8);

    long slong_min = -(1L << (sizeof(long)*8-1));
    long slong_max = (1L << (sizeof(long)*8-1)) - 1;
    unsigned long ulong_max = (unsigned long)~0UL;
    printf("Signed long: %ld to %ld\n", slong_min, slong_max);
    printf("  Min binary: "); print_binary((unsigned long)slong_min, sizeof(long)*8);
    printf("  Max binary: "); print_binary((unsigned long)slong_max, sizeof(long)*8);

    printf("Unsigned long: 0 to %lu\n", ulong_max);
    printf("  Min binary: "); print_binary(0, sizeof(long)*8);
    printf("  Max binary: "); print_binary(ulong_max, sizeof(long)*8);

    printf("\nFloating-point ranges using <float.h>:\n");
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    printf("\nFloating-point ranges by computation (approximate):\n");
    printf("float: %e to %e\n", compute_float_min(), compute_float_max());
    printf("double: %e to %e\n", compute_double_min(), compute_double_max());
    printf("long double: %Le to %Le\n", compute_long_double_min(), compute_long_double_max());

    return 0;
}
