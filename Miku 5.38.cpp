

#include <iostream>
#include <cmath>

double power_series_sum() {
    double x = 2.0;
    double sum = 0.0;
    for (int i = 1; i <= 6; ++i) {
        sum += pow(x, 2 * i - 1) / (2 * i - 1);
    }
    return sum;
}

int main() {
    std::cout << "Сумма при x=2 равна: " << power_series_sum() << std::endl;
    return 0;
}
