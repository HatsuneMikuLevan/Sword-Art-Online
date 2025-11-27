

#include <iostream>
#include <vector>
#include <cmath> 

int main() {
    std::vector<double> arr = {1.0, -2.0, 3.0, -4.0, 5.0, -6.0, 0.0};
    double sum_positive = 0.0;
    double sum_negative = 0.0;

    for (double x : arr) {
        if (x > 0) {
            sum_positive += x;
        } else if (x < 0) {
            sum_negative += x;
        }
    }

    if (sum_negative == 0.0) {
        std::cout << "Ошибка: Сумма отрицательных элементов равна нулю." << std::endl;
        return 1;
    }

    double quotient = sum_positive / std::abs(sum_negative);

    std::cout << "Частное: " << quotient << std::endl;

    return 0;
}
