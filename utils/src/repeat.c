#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        exit(0);
    } else {
        char a[65535];

        for (int b = 1; b < argc; b++) {
            sprintf(a, "%s ", argv[b]);
            strcat(a, argv[b]);
        }

        while (1) {
            printf("%s ", a);
        }
    }
}
