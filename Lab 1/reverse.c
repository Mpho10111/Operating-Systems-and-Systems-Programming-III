#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: ./reverse <string>\n");
        exit(1);
    }

    int len = strlen(argv[1]);

    for (int i = len - 1; i >= 0; i--) {
        putchar(argv[1][i]);
    }

    putchar('\n');

    return 0;
}