

#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите начало промежутка (a): ";
    std::cin >> a;
    std::cout << "Введите конец промежутка (b): ";
    std::cin >> b;

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (i % 4 == 0 && i > 0) {
            sum += i;
        }
    }
    std::cout << "Сумма целых положительных чисел, кратных четырем, из промежутка от " << a << " до " << b << ": " << sum << std::endl;
    return 0;
}
