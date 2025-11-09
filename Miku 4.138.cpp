

#include <iostream>

int main() {
    int m;
    std::cout << "Введите номер масти (1-4): ";
    std::cin >> m;

    switch (m) {
        case 1:
            std::cout << "пики" << std::endl;
            break;
        case 2:
            std::cout << "трефы" << std::endl;
            break;
        case 3:
            std::cout << "бубны" << std::endl;
            break;
        case 4:
            std::cout << "червы" << std::endl;
            break;
        default:
            std::cout << "Неверный номер масти." << std::endl;
            break;
    }
    return 0;
}
