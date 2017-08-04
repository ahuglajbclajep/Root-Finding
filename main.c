#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "solve-methods.h"
#include "funcdef.h"
#include "const.h"

int main() {
    puts("'4x-xe^(2x)+2 = 0' solve with Newton-Raphson method.");
    question a = {f, df, .init = NEWTON_RAPHSON_INITIAL_VALUE};
    printf("x = %.8lf\n", newton_raphson(a));

    puts("'x-cos(x) = 0' solve with Bisection, Secant & Newton-Raphson method.");
    question b = {g, dg, G_RANGE_MIN, G_RANGE_MAX, NEWTON_RAPHSON_INITIAL_VALUE};
    printf("Bisection method: x = %.8lf\n", bisection(b));
    printf("Secant method: x = %.8lf\n", secant(b));
    printf("Newton-Raphson method: x = %.8lf\n", newton_raphson(b));

    return EXIT_SUCCESS;
}
