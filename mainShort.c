/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>

void displayLine(int a, int b, int c, int d);

int evaluateCircuit(int a, int b, int c, int d);

int main() {
    int max = 16;

    printf("1 2 3 4   output\n");

    for(int i = 0; i < max; i++)
        displayLine(i & 8 ? 1 : 0, i & 4 ? 1 : 0, i & 2 ? 1 : 0, i & 1);

    return 0;
}

void displayLine(int a, int b, int c, int d) {
    printf("%d %d %d %d   %d\n", a, b, c, d, evaluateCircuit(a, b, c, d));
}

int evaluateCircuit(int a, int b, int c, int d) {
    return !((!a && b) || (c || d)) ? 1 : 0;
}