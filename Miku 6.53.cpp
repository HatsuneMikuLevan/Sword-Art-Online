

#include <iostream>

void solve_6_53() {
    int n, a, b, k, temp;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    std::cout << "Введите цифру a: ";
    std::cin >> a;
    std::cout << "Введите цифру b: ";
    std::cin >> b;
    std::cout << "Введите число k: ";
    std::cin >> k;

    int count_a = 0;
    bool has_b = false;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == a) {
            count_a++;
        }
        if (digit == b) {
            has_b = true;
        }
        temp /= 10;
    }

    std::cout << "а) В числе " << n << (count_a > 0 ? " есть" : " нет") << " цифра " << a << "." << std::endl;
    std::cout << "б) Верно ли, что в числе " << n << " нет цифры " << b << "? " << (has_b ? "Нет" : "Да") << "." << std::endl;
    std::cout << "в) Цифра " << a << (count_a > k ? " встречается" : " не встречается") << " более " << k << " раз." << std::endl;
    std::cout << "г) В числе " << n << (count_a > 0 && has_b ? " есть" : " нет") << " цифры " << a << " и " << b << "." << std::endl;
}
