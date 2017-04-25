#include <stdio.h>
#include "bisection.h"
#include "secant.h"
#include "newton-raphson.h"

int main() {
    const double accuracy = 0.01;

    int input;
    printf("Please enter a number from 1 to 3\n");
    scanf("%d", &input);

    double answer;
    int change = 0;
    switch (input) {
        case 1:
            printf("use Bisection method\n");
            answer = bisectionMethod(accuracy);
            change = 1;
            break;

        case 2:
            printf("use Secant method\n");
            answer = secant_method(accuracy);
            change = 1;
            break;

        case 3:
            printf("use Newton-Raphson method\n");
            answer = newton_raphson_method(accuracy);
            change = 1;
            break;
    }

    if (change) {
        printf("x = %.8lf\n", answer);
    } else {
        printf("Incorrect input\n");
    }

    return 0;
}
