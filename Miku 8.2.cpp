

#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    // Способ 1: с использованием оператора цикла с условием
    int k1 = 1;
    while (k1 * k1 <= n) {
        k1++;
    }
    std::cout << "Способ 1: Первое число больше n: " << k1 * k1 << std::endl;

    // Способ 2: без использования оператора цикла с условием
    int k2 = static_cast<int>(std::sqrt(n)) + 1;
    std::cout << "Способ 2: Первое число больше n: " << k2 * k2 << std::endl;

    return 0;
}
