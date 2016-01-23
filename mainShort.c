/**
 * This is a short and compact version of the primary file.
 */

#include <stdio.h>
#include <math.h>

/**
 * The number of bits used by the logic as input.
 */
const unsigned int BIT_COUNT = 4;

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
    // Define the input array, two index variables and a variable that contains the maximum value
    int in[BIT_COUNT],
        entryIndex,
        bitIndex,
        max = MAX;

    // Calculate the maximum value if not specified
    if(max == -1)
        max = (int) pow(2, BIT_COUNT);

    // Print the header; the header numbers first, followed by the output string
    for(entryIndex = 0; entryIndex < BIT_COUNT; entryIndex++)
        printf("%d ", entryIndex + 1);
    printf("  output\n");

    // Go through all the possible values
    for(entryIndex = 0; entryIndex < max; entryIndex++) {
        // Build the input set with the proper bits based on the selected value
        for(bitIndex = 0; bitIndex < BIT_COUNT; bitIndex++) {
            // Calculate the exponent of the current bit position
            int exp = (int) pow(2, BIT_COUNT - bitIndex - 1);

            // Determine the current bit value
            in[bitIndex] = entryIndex & exp ? 1 : 0;
        }

        // Evaluate the logic and print the result with the built input set
        printEntry(in);
    }
}
