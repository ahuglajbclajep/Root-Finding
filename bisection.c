#include <math.h>
#include <stdbool.h>
#include "type.h"
#include "const.h"

static inline double midpoint(double a, double b) {
    return (a+b)/2;
}

double bisection(question q) {
    double min = q.min, max = q.max;

    double x;
    while (true) {
        x = midpoint(min, max);
        double y = q.f(x);

        if (fabs(y) <= ACCURACY) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}
