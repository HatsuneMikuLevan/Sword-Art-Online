

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество чисел n: ";
    std::cin >> n;
    double sum_of_squares = 0.0;
    for (int i = 0; i < n; ++i) {
        double a;
        std::cout << "Введите число a_" << i + 1 << ": ";
        std::cin >> a;
        sum_of_squares += a * a;
    }
    std::cout << "Сумма квадратов вещественных чисел: " << sum_of_squares << std::endl;
    return 0;
}
