
#include <iostream>

int main() {
    int n;
    std::cout << "Введите возраст (1 <= n <= 99): ";
    std::cin >> n;

    if (n < 1 || n > 99) {
        std::cout << "Некорректный возраст." << std::endl;
        return 1;
    }

    std::cout << "Мне " << n << " ";
    int last_digit = n % 10;
    int last_two_digits = n % 100;

    if (last_two_digits >= 11 && last_two_digits <= 14) {
        std::cout << "лет" << std::endl;
    } else if (last_digit == 1) {
        std::cout << "год" << std::endl;
    } else if (last_digit >= 2 && last_digit <= 4) {
        std::cout << "года" << std::endl;
    } else {
        std::cout << "лет" << std::endl;
    }

    return 0;
}
