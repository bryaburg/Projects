#include <stdio.h>

int htoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] != '\0'; ++i){
      if (s[i] >= '0' && s[i] <= '9'){
        n = 16 * n + (s[i] - '0');
      } else if (s[i] >= 'a' && s[i] <= 'f') {
        n = 16 * n + (s[i] - 'a' + 10);
      } else if (s[i] >= 'A' && s[i] <= 'F') {
        n = 16 * n + (s[i] - 'A' + 10);
        }
    }
    return(n);
}

int main() {
  int htoi();
  printf("htoi('83e9e') = %d\n", htoi("83e9e"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}

