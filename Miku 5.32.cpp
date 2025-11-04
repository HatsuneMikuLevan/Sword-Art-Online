
#include <iostream>

double harmonic_sum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Сумма равна: " << harmonic_sum(n) << std::endl;
    return 0;
}
