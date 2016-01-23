/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>

/**
 * The number of bits used by the logic as input.
 */
const unsigned int BIT_COUNT = 5;

/**
 * The maximum value to evaluate.
 * If this constant is set to -1, all possible values will be evaluated.
 */
const int MAX = -1;

/**
 * Evaluate the the logic formula.
 *
 * @param in An integer array of the input bits.
 *
 * @return Result.
 */
int evaluateLogic(int in[]) {
    // TODO: Insert your one-liner here
    return !(!in[0] && in[1] || in[2] || in[3]) ? 1 : 0;
}

/**
 * Print an input set entry with it's corresponding output.
 *
 * @param in An integer array of the input bits.
 */
void printEntry(int in[]) {
    // Evaluate the logic, store the result and define an index variable
    int out = evaluateLogic(in),
              i;

    // Print all input bits followed by the output value
    for(i = 0; i < BIT_COUNT; i++)
        printf("%d ", in[i]);
    printf("  %d\n", out);
}

/**
 * Called on start.
 */
int main() {
    // Define an index variable
    int i;

    // Print the header
    printf("1 2 3 4   output\n");

    // Go through all the possible values
    for(i = 0; i < MAX; i++)
        // Determine the bit state at each position for all values
        printEntry(i & 8 ? 1 : 0, // a bit, 1 or 0
                   i & 4 ? 1 : 0, // b bit, 1 or 0
                   i & 2 ? 1 : 0, // c bit, 1 or 0
                   i & 1);        // d bit, 1 or 0
}
