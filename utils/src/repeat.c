#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        exit(0);
    } else {
        char a[65535];
        char b[65535];

        for (int c = 1; c < argc; c++) {
            sprintf(b, "%s ", argv[c]);
            strcat(a, b);
        }

        while (1) {
            printf("%s ", a);
        }
    }
    
    return 0;
}
