#include "funcdef.h"
#include "const.h"

static double f_get_x_when_y_is_zero(double initial_value) {
    return initial_value - f(initial_value)/df(initial_value);
}

double f_newton_raphson() {

    double x = 1;
    for (int i=0; i<TRIALS; i++) {
        x = f_get_x_when_y_is_zero(x);
        if (f(x) <= ACCURACY) break;
    }

    return x;
}

