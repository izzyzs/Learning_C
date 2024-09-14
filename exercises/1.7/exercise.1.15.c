// Created Saturday September 14, 2024
/*
    PROMPT: Exercise 1-15. Rewrite the 
    temperature conversion program of 
    Section 1.2 to use a function for 
    conversion.
*/
#include <stdio.h>

double convertFahrenheitToCelsius(double fahr);

int main() {
    double fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celsius = convertFahrenheitToCelsius(fahr);
        printf("fahrenheit: %f\tcelcius: %f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}

double convertFahrenheitToCelsius(double fahr) {
    double celsius = (5 * (fahr-32)) / 9;
    return celsius;
}