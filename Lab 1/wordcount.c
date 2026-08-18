#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: ./wordcount <sentence>\n");
        exit(1);
    }

    char buffer[1024];

    strncpy(buffer, argv[1], sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    int count = 0;

    char *token = strtok(buffer, " ");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    printf("%d\n", count);

    return 0;
}