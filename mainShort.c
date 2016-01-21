/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>

/**
 * The maximum value to loop to.
 */
const int MAX = 16;

void displayLine(int a, int b, int c, int d);

int evaluateCircuit(int a, int b, int c, int d);

int main() {
    // Print the header
    printf("1 2 3 4   output\n");

    // Print all options
    for(int i = 0; i < MAX; i++)
        displayLine(i & 8 ? 1 : 0, i & 4 ? 1 : 0, i & 2 ? 1 : 0, i & 1);

    return 0;
}

void displayLine(int a, int b, int c, int d) {
    printf("%d %d %d %d   %d\n", a, b, c, d, evaluateCircuit(a, b, c, d));
}

int evaluateCircuit(int a, int b, int c, int d) {
    return !(!a && b || c || d) ? 1 : 0;
}