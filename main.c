#include <stdio.h>
#include "bisection.h"
#include "secant.h"
#include "newton-raphson.h"

int main() {
    printf("4x-xe^(2x)+2 = 0\n");
    printf("solve with Newton-Raphson method.\n");

    printf("x = %.8lf\n", f_newton_raphson());

    printf("x-cos(x) = 0\n");
    printf("solve with Bisection, Secant & Newton-Raphson method.\n");

    printf("x = %.8lf\n", bisection());
    printf("x = %.8lf\n", secant());

    return 0;
}
