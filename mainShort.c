/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>

void displayLine(int a, int b, int c, int d);

int main() {
    int max = 16;
    int i;

    printf("1 2 3 4   output\n");

    for(i = 0; i < max; i++) {
        int pos8 = 0,
                pos4 = 0,
                pos2 = 0,
                pos1 = 0,
                x = i;

        if(x >= 8) {
            pos8 = 1;
            x -= 8;
        }

        if(x >= 4) {
            pos4 = 1;
            x -= 4;
        }

        if(x >= 2) {
            pos2 = 1;
            x -= 2;
        }

        if(x == 1) {
            pos1 = 1;
        }

        displayLine(pos8, pos4, pos2, pos1);
    }

    return 0;
}

void displayLine(int a, int b, int c, int d) {
    int output = !((!a && b) || (c || d)) ? 1 : 0;
    printf("%d %d %d %d   %d\n", a, b, c, d, output);
}

