#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n >= 10 && n <= 99) {
        std::cout << "Число является двузначным." << std::endl;
    } else {
        std::cout << "Число не является двузначным." << std::endl;
    }

    return 0;
}
