
#include <iostream>

int main() {
    int k;
    std::cout << "Введите количество грибов: ";
    std::cin >> k;

    std::cout << "Мы нашли " << k << " ";
    int last_digit = k % 10;
    int last_two_digits = k % 100;

    if (last_two_digits >= 11 && last_two_digits <= 14) {
        std::cout << "грибов в лесу." << std::endl;
    } else if (last_digit == 1) {
        std::cout << "гриб в лесу." << std::endl;
    } else if (last_digit >= 2 && last_digit <= 4) {
        std::cout << "гриба в лесу." << std::endl;
    } else {
        std::cout << "грибов в лесу." << std::endl;
    }

    return 0;
}
