#include <stdio.h>

int main() {
    int initial, end, step;
    float celsius, fahr;

    initial = 0;
    end = 300;
    step = 20;

    celsius = initial;
    printf("Celsius\tFahrenheit\n-------------------\n");
    while (celsius <= end) {
        fahr = (celsius * 5.0 / 9.0) + 32;
        printf("%3.0f\t%12.1f\n", celsius, fahr);
        celsius += step;
    }
}