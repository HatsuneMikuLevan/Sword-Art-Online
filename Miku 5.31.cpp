

#include <iostream>

long long sum_of_squares(int n) {
    return (long long)n * (14LL * n * n + 15LL * n + 1) / 6;
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Сумма равна: " << sum_of_squares(n) << std::endl;
    return 0;
}
