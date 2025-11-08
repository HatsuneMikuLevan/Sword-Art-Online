
#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Введите четыре целых числа: ";
    std::cin >> a >> b >> c >> d;

    int sum = 0;
    if (a % 3 == 0) {
        sum += a;
    }
    if (b % 3 == 0) {
        sum += b;
    }
    if (c % 3 == 0) {
        sum += c;
    }
    if (d % 3 == 0) {
        sum += d;
    }

    std::cout << "Сумма чисел, кратных трем: " << sum << std::endl;

    return 0;
}
