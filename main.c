#include <stdio.h>

void usage (char * prg) {
    printf("%s [-o ...] [-so ...] [-a ...] [-c ...]\n", prg);
}

int main (int argc, char **argv) {
    printf("Welcome to the Dependency Manager 1.0\n");
    if (argc < 2) {
        usage(argv[0]);
    }
}