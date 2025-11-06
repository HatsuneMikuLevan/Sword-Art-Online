

#include <iostream>

void solve_6_55() {
    int n, a, b, temp;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    std::cout << "Введите цифру a: ";
    std::cin >> a;
    std::cout << "Введите цифру b: ";
    std::cin >> b;

    int count_a = 0;
    int count_b = 0;
    temp = n;
    if (temp == 0) {
        if (a == 0) count_a = 1;
        if (b == 0) count_b = 1;
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == a) {
                count_a++;
            }
            if (digit == b) {
                count_b++;
            }
            temp /= 10;
        }
    }

    std::cout << "Верно ли, что цифра " << a << " встречается реже, чем цифра " << b << "? " << (count_a < count_b ? "Да" : "Нет") << "." << std::endl;
}
