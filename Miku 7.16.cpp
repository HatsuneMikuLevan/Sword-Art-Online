

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    long long sum_b = 0;
    for (int i = 0; i < n; ++i) {
        int b;
        std::cout << "Введите число b_" << i + 1 << ": ";
        std::cin >> b;
        sum_b += b;
    }
    if (sum_b < n) {
        std::cout << "Да, сумма чисел b меньше n" << std::endl;
    } else {
        std::cout << "Нет, сумма чисел b не меньше n" << std::endl;
    }
    return 0;
}
