#include <iostream>

int main() {
    double a1, b1, c1, a2, b2, c2;
    std::cout << "Введите три различных числа для первой тройки: ";
    std::cin >> a1 >> b1 >> c1;
    std::cout << "Введите три различных числа для второй тройки: ";
    std::cin >> a2 >> b2 >> c2;

    double middle1 = (a1 > b1 && a1 < c1  a1 < b1 && a1 > c1 ? a1 : (b1 > a1 && b1 < c1  b1 < a1 && b1 > c1 ? b1 : c1));
    double middle2 = (a2 > b2 && a2 < c2  a2 < b2 && a2 > c2 ? a2 : (b2 > a2 && b2 < c2  b2 < a2 && b2 > c2 ? b2 : c2));

    double average_of_middles = (middle1 + middle2) / 2.0;

    std::cout << "Среднее арифметическое средних чисел: " << average_of_middles << std::endl;

    return 0;
}
