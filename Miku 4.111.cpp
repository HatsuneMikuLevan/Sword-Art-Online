

#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Введите четыре целых числа: ";
    std::cin >> a >> b >> c >> d;

    int count = 0;
    if (a % 2 == 0) {
        count++;
    }
    if (b % 2 == 0) {
        count++;
    }
    if (c % 2 == 0) {
        count++;
    }
    if (d % 2 == 0) {
        count++;
    }

    std::cout << "Количество четных чисел: " << count << std::endl;

    return 0;
}
