

#include <iostream>

int main() {
    int sum = 0;
    int term = 2; // Начальное значение для 2^1

    for (int i = 2; i <= 10; ++i) {
        term *= 2;
        sum += term;
    }

    std::cout << "Сумма равна: " << sum << std::endl;
    return 0;
}
