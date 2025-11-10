

#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;
    double product = 1.0;
    for (int i = 0; i < n; ++i) {
        double num;
        std::cout << "Введите число " << i + 1 << ": ";
        std::cin >> num;
        product *= num;
    }
    std::cout << "Произведение чисел: " << product << std::endl;
    return 0;
}
