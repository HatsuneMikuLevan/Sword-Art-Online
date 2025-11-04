

#include <iostream>
#include <cmath>

double geometric_sum() {
    double sum = 0.0;
    for (int i = 0; i <= 8; ++i) {
        sum += 1.0 / pow(3, i);
    }
    return sum;
}

int main() {
    std::cout << "Сумма равна: " << geometric_sum() << std::endl;
    return 0;
}
