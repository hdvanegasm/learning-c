#include <stdio.h>

int main() {
    int charact, counter;
    counter = 0;

    while ((charact = getchar()) != EOF) {
        if (charact == '\n') ++counter;
    }

    printf("%d", counter);
}