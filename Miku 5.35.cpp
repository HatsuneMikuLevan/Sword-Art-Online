
#include <iostream>

long long sum_of_products(int n) {
    if (n <= 2) return 0;
    return (long long)(n - 1) * n * (n + 1) / 3;
}

int main() {
    int n;
    std::cout << "Введите n (n > 2): ";
    std::cin >> n;
    std::cout << "Сумма равна: " << sum_of_products(n) << std::endl;
    return 0;
}
