#include <stdio.h>

int main() {
    int digit_counter[10];
    int other_counter, blank_counter, i;

    other_counter = blank_counter = 0;
    for (i = 0; i < 10; i++) digit_counter[i] = 0;

    char c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            blank_counter++;
        } else if (c >= '0' && c <= '9') {
            digit_counter[c - '0']++;
        } else {
            other_counter++;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; i++) printf(" %d", digit_counter[i]);
    printf(", blanks = %d, other = %d", blank_counter, other_counter);
}