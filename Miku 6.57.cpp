

#include <iostream>

void solve_6_57() {
    int n, a, b, temp;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    std::cout << "Введите цифру a: ";
    std::cin >> a;
    std::cout << "Введите цифру b: ";
    std::cin >> b;

    int last_a_pos = -1;
    int last_b_pos = -1;
    int pos = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == a) {
            last_a_pos = pos;
        }
        if (digit == b) {
            last_b_pos = pos;
        }
        temp /= 10;
        pos++;
    }

    if (last_a_pos != -1 && last_b_pos != -1) {
        if (last_a_pos < last_b_pos) {
            std::cout << "Цифра " << a << " расположена правее." << std::endl;
        } else {
            std::cout << "Цифра " << b << " расположена правее." << std::endl;
        }
    } else if (last_a_pos != -1) {
        std::cout << "В числе есть только цифра " << a << "." << std::endl;
    } else if (last_b_pos != -1) {
        std::cout << "В числе есть только цифра " << b << "." << std::endl;
    } else {
        std::cout << "В числе нет ни цифры " << a << ", ни цифры " << b << "." << std::endl;
    }
}
