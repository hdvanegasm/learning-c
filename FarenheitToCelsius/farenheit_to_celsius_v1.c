#include <stdio.h>

int main() {
    int init, end, step;
    int celsius;

    init = 0;
    end = 300;
    step = 20;

    while (init <= end) {
        celsius = 5 * (init - 32) / 9;
        printf("%3d\t%6d\n", init, celsius);
        init += step;
    }
}