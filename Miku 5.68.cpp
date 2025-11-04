

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n (1 <= n <= 10): ";
    std::cin >> n;
    long long total_sum = 0;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        total_sum += factorial;
    }
    std::cout << "Сумма факториалов равна: " << total_sum << std::endl;
    return 0;
}
