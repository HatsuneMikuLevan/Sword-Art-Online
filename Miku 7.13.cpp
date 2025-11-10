

#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество чисел n: ";
    std::cin >> n;
    long long sum_of_squares = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cout << "Введите число a_" << i + 1 << ": ";
        std::cin >> a;
        sum_of_squares += static_cast<long long>(a) * a;
    }
    std::cout << "Сумма квадратов: " << sum_of_squares << std::endl;
    return 0;
}
