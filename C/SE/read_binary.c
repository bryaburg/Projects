#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256];
    const char *filename = "01 Home Page.pin";

    file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}