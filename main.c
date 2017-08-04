#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "bisection.h"
#include "secant.h"
#include "newton-raphson.h"
#include "funcdef.h"
#include "const.h"

int main() {
    puts("'4x-xe^(2x)+2 = 0' solve with Newton-Raphson method.");
    question a = {f, df, .init = NEWTON_RAPHSON_INITIAL_VALUE};
    printf("x = %.8lf\n", f_newton_raphson());

    puts("'x-cos(x) = 0' solve with Bisection, Secant & Newton-Raphson method.");
    printf("Bisection method: x = %.8lf\n", bisection());
    printf("Secant method: x = %.8lf\n", secant());
    printf("Newton-Raphson method: x = %.8lf\n", g_newton_raphson());

    return EXIT_SUCCESS;
}
