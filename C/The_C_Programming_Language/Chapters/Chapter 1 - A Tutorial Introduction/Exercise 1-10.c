// Write a program which prints the words in its input, one per line. A word is any string separated by a space or newline.

#include <stdio.h>

int main() {
    int c;
    int in_word = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                putchar('\n');
                in_word = 0;
            }
        } else {
            putchar(c);
            in_word = 1;
        }
    }
    if (in_word) {
        putchar('\n');
    }

    return 0;
}