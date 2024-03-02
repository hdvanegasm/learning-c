#include <stdio.h>

#define IN 0  /* Flag if we are inside a word. */
#define OUT 1 /* Flag if we are outside a word. */

/* Counts lines, words and characters in input. */
int main() {
    int c, n_lines, n_words, n_char;

    int state = OUT;
    n_lines = n_words = n_char = 0;
    while ((c = getchar()) != EOF) {
        n_char++;

        if (c == '\n') {
            n_lines++;
        }

        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            n_words++;
            state = IN;
        }
    }
    printf("%d %d %d", n_lines, n_words, n_char);
}