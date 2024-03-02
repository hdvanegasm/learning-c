#include <stdio.h>

int main() {
    int init, end, step;
    float celsius, farh;

    init = 0;
    end = 300;
    step = 20;

    farh = init;

    while (farh <= end) {
        celsius = (5.0 / 9.0) * (farh - 32);
        printf("%3.0f\t%6.1f\n", farh, celsius);
        farh += step;
    }
}