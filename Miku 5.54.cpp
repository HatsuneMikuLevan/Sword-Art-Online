

#include <iostream>

int main() {
    double a;
    int n;

    std::cout << "Введите вещественное число a: ";
    std::cin >> a;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    double power = 1.0;
    for (int i = 1; i <= n; ++i) {
        power *= a;
        std::cout << "a^" << i << " = " << power << std::endl;
    }

    return 0;
}
