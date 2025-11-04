

#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Введите начальное число (a): ";
    std::cin >> a;
    std::cout << "Введите конечное число (b): ";
    std::cin >> b;
    std::cout << "Введите делитель (c): ";
    std::cin >> c;

    std::cout << "Целые числа от " << a << " до " << b << ", кратные " << c << ":" << std::endl;
    for (int i = a; i <= b; ++i) {
        if (i % c == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
