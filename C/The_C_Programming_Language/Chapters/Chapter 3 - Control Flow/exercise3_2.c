// Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. 
// Use a switch. 
// Write a function for the other direction as well, converting escape sequences into the real characters

#include <stdio.h> 

void escape(input, output)
char input[], output[];
{
  int i, j;
  for(i=0, j=0; input[i]; i++) 
  {
    switch (input[i]) {
      case '\n':
        output[j++] = '\\';
        output[j++] = 'n';
        break;
      case '\t':
        output[j++] = '\\';
        output[j++] = 't';
        break;
      default:
        output[j++] = input[i];
        break;
    }
  output[j] = '\0';
  }
} 

int main() {
  char output[1000];
  void escape();
  escape("Hello world", output);
  printf("%s\n", output);
  escape("Hello world\n", output);
  printf("%s\n", output);
  escape("Hello\tworld\n", output);
  printf("%s\n", output);
  escape("Hello\tworld\n", output);
  printf("%s\n", output);

  return 0;
}
