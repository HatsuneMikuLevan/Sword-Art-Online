

#include <iostream>
#include <cmath>

double alternating_power_series_sum() {
    double x = 2.0;
    double sum = 0.0;
    for (int i = 0; i <= 10; ++i) {
        sum += pow(-1, i) * (i + 1) / (i + 2) * pow(x, i);
    }
    return sum;
}

int main() {
    std::cout << "Сумма при x=2 равна: " << alternating_power_series_sum() << std::endl;
    return 0;
}
