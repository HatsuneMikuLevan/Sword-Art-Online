#include <iostream>
#include <iomanip>

int main() {
    int a, b;
    std::cout << "Введите первое целое число: ";
    std::cin >> a;
    std::cout << "Введите второе целое число: ";
    std::cin >> b;

    double avg = static_cast<double>(a + b) / 2.0;

    std::cout << a << "+" << b << "=" << a + b << " ";
    std::cout << a << "-" << b << "=" << a - b << " ";
    std::cout << a << "*" << b << "=" << a * b << " ";
    std::cout << a << "/" << b << "=" << std::fixed << std::setprecision(15) << static_cast<double>(a) / b << " ";
    std::cout << "(" << a << "+" << b << ")/2=" << avg << std::endl;

    return 0;
}
