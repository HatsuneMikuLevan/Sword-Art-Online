

#include <iostream>

long long sumRange(int start, int end) {
    long long sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    // а) сумму всех целых чисел от 200 до 600
    std::cout << "a) Сумма от 200 до 600: " << sumRange(200, 600) << std::endl;

    // б) сумму всех целых чисел от а до 400 (a <= 400)
    int a;
    std::cout << "б) Введите значение a (a <= 400): ";
    std::cin >> a;
    if (a <= 400) {
        std::cout << "Сумма от " << a << " до 400: " << sumRange(a, 400) << std::endl;
    } else {
        std::cout << "Некорректный ввод: a должно быть меньше или равно 400." << std::endl;
    }

    // в) сумму всех целых чисел от -15 до b (b > -15)
    int b;
    std::cout << "в) Введите значение b (b > -15): ";
    std::cin >> b;
    if (b > -15) {
        std::cout << "Сумма от -15 до " << b << ": " << sumRange(-15, b) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть больше -15." << std::endl;
    }

    // г) сумму всех целых чисел от а до b (b > a)
    int a2, b2;
    std::cout << "г) Введите значения a и b (b > a): ";
    std::cin >> a2 >> b2;
    if (b2 > a2) {
        std::cout << "Сумма от " << a2 << " до " << b2 << ": " << sumRange(a2, b2) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть больше a." << std::endl;
    }

    return 0;
}
