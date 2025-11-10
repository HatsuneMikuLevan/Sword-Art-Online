

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    long long sum_x = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cout << "Введите число x_" << i + 1 << ": ";
        std::cin >> x;
        sum_x += x;
    }
    int b;
    std::cout << "Введите число b: ";
    std::cin >> b;
    if (b != 0 && sum_x % b == 0) {
        std::cout << "Да, сумма чисел x кратна числу b" << std::endl;
    } else {
        std::cout << "Нет, сумма чисел x не кратна числу b" << std::endl;
    }
    return 0;
}
