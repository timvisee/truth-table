/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>

/**
 * The maximum value to loop to.
 */
const int MAX = 16;

/**
 * Evaluate the the logic formula.
 *
 * @param a Input A.
 * @param b Input B.
 * @param c Input C.
 * @param d Input D.
 *
 * @return Result.
 */
int evaluateLogic(int a, int b, int c, int d) {
    // Insert your one-liner here.
    return !(!a && b || c || d) ? 1 : 0;
}

/**
 * Print an input set entry with it's corresponding output.
 *
 * @param a Input A.
 * @param b Input B.
 * @param c Input C.
 * @param d Input D.
 */
void printEntry(int a, int b, int c, int d) {
    printf("%d %d %d %d   %d\n", a, b, c, d, evaluateLogic(a, b, c, d));
}

/**
 * Called on start.
 */
int main() {
    // Print the header
    printf("1 2 3 4   output\n");

    // Print all options
    int i;
    for(i = 0; i < MAX; i++)
        printEntry(i & 8 ? 1 : 0, i & 4 ? 1 : 0, i & 2 ? 1 : 0, i & 1);
}
