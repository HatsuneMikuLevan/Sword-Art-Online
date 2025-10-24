#include <iostream>

int main() {
    int a, n;
    std::cout << "Введите два целых числа a и n: ";
    std::cin >> a >> n;

    if (a == 0) {
        std::cout << "Число 0 не может быть делителем." << std::endl;
    } else if (n % a == 0) {
        std::cout << "Число " << a << " является делителем числа " << n << "." << std::endl;
    } else {
        std::cout << "Число " << a << " не является делителем числа " << n << "." << std::endl;
    }

    return 0;
}
