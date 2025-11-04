
#include <iostream>

long long productRange(int start, int end) {
    long long product = 1;
    for (int i = start; i <= end; ++i) {
        product *= i;
    }
    return product;
}

int main() {
    // а) произведение всех целых чисел от 7 до 14
    std::cout << "а) Произведение от 7 до 14: " << productRange(7, 14) << std::endl;

    // б) произведение всех целых чисел от а до 15 (1 < a < 15)
    int a;
    std::cout << "б) Введите значение a (1 < a < 15): ";
    std::cin >> a;
    if (a > 1 && a < 15) {
        std::cout << "Произведение от " << a << " до 15: " << productRange(a, 15) << std::endl;
    } else {
        std::cout << "Некорректный ввод: a должно быть в диапазоне (1, 15)." << std::endl;
    }

    // в) произведение всех целых чисел от 1 до b (1 < b <= 10)
    int b;
    std::cout << "в) Введите значение b (1 < b <= 10): ";
    std::cin >> b;
    if (b > 1 && b <= 10) {
        std::cout << "Произведение от 1 до " << b << ": " << productRange(1, b) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть в диапазоне (1, 10]." << std::endl;
    }

    // г) произведение всех целых чисел от а до b (b > a)
    int a2, b2;
    std::cout << "г) Введите значения a и b (b > a): ";
    std::cin >> a2 >> b2;
    if (b2 > a2) {
        std::cout << "Произведение от " << a2 << " до " << b2 << ": " << productRange(a2, b2) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть больше a." << std::endl;
    }

    return 0;
}
