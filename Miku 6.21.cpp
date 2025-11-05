

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число (>9): ";
    std::cin >> n;
    int secondDigit = (n / 10) % 10;
    std::cout << "Вторая цифра числа: " << secondDigit << std::endl;
    return 0;
}
