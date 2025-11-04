

#include <iostream>

long long sum_of_squares_1_to_n(int n) {
    return (long long)n * (n + 1) * (2LL * n + 1) / 6;
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Сумма равна: " << sum_of_squares_1_to_n(n) << std::endl;
    return 0;
}
