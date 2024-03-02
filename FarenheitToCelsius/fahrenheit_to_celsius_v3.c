#include <stdio.h>

#define LOWER 0   /* Lower bound for the values of fahrenheit. */
#define UPPER 300 /* Upper bound for the values of fahrenheit. */
#define STEP 20   /* Step that takes each value of fahrenheit. */

int main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}