#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./ret <integer>\n");
        exit(1);
    }

    int x = atoi(argv[1]);

    int pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0) {
        return x * 2;
    } else {
        int res;
        wait(&res);

        if (WIFEXITED(res)) {
            printf("%d\n", WEXITSTATUS(res));
        }
    }

    return 0;
}
