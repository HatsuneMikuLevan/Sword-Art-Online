

#include <iostream>
#include <cmath>

double alternating_harmonic_sum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, i + 1) / i;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Сумма равна: " << alternating_harmonic_sum(n) << std::endl;
    return 0;
}
