/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>

/**
 * The maximum value to loop to.
 */
const int MAX = 16;

/**
 * Evaluate the circuit.
 *
 * @param a Input A.
 * @param b Input B.
 * @param c Input C.
 * @param d Input D.
 *
 * @return Result.
 */
int evaluateCircuit(int a, int b, int c, int d) {
    return !(!a && b || c || d) ? 1 : 0;
}

/**
 * Display the output an input set.
 *
 * @param a Input A.
 * @param b Input B.
 * @param c Input C.
 * @param d Input D.
 */
void displayLine(int a, int b, int c, int d) {
    printf("%d %d %d %d   %d\n", a, b, c, d, evaluateCircuit(a, b, c, d));
}

/**
 * Called on start.
 */
int main() {
    // Print the header
    printf("1 2 3 4   output\n");

    // Print all options
    for(int i = 0; i < MAX; i++)
        displayLine(i & 8 ? 1 : 0, i & 4 ? 1 : 0, i & 2 ? 1 : 0, i & 1);

    return 0;
}