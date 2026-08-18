#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: ./nullterm <string>\n");
        exit(1);
    }

    char buffer[10];

    strncpy(buffer, argv[1], sizeof(buffer));

    buffer[sizeof(buffer) - 1] = '\0';

    printf("Copied string: %s\n", buffer);
    printf("String length (strlen): %zu\n", strlen(buffer));

    return 0;
}