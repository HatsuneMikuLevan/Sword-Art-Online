

#include <iostream>

void solve_6_52() {
    int n, temp;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    // a) есть ли цифра 3
    bool has_3 = false;
    temp = n;
    while (temp > 0) {
        if (temp % 10 == 3) {
            has_3 = true;
            break;
        }
        temp /= 10;
    }
    std::cout << "а) В числе " << n << (has_3 ? " есть" : " нет") << " цифры 3." << std::endl;

    // б) есть ли цифры 2 и 5
    bool has_2 = false;
    bool has_5 = false;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 2) {
            has_2 = true;
        }
        if (digit == 5) {
            has_5 = true;
        }
        temp /= 10;
    }
    std::cout << "б) В числе " << n << (has_2 && has_5 ? " есть" : " нет") << " цифры 2 и 5." << std::endl;
}
