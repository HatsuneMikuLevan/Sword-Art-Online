#include <iostream>
#include <cmath>

double solve446(double x) {
    if (x >= 0.2 && x <= 0.9) {
        return sin(x);
    } else {
        return 1.0;
    }
}
