// Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. 
// Use a switch. 
// Write a function for the other direction as well, converting escape sequences into the real characters

#include <stdio.h>

void escape(char s[], const char t[]) {
    int i = 0; 
    int j = 0; 

    while (t[i] != '\0') {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
                break;
        }
        i++; 
    }
    s[j] = '\0';
}

int main() {
    char original[] = "Hello\tWorld!";
    char escaped[100];

    printf("Original String:\n\"%s\"\n", original);

    escape(escaped, original);
    printf("Escaped String:\n\"%s\"\n", escaped);

    return 0;
}
