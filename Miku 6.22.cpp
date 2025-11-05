

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число (>99): ";
    std::cin >> n;
    int thirdDigit = (n / 100) % 10;
    std::cout << "Третья цифра числа: " << thirdDigit << std::endl;
    return 0;
}
