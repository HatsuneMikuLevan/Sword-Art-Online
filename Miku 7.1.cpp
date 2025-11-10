

#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double num;
        std::cout << "Введите число " << i + 1 << ": ";
        std::cin >> num;
        sum += num;
    }
    std::cout << "Сумма чисел: " << sum << std::endl;
    return 0;
}
