#include <iostream>

int main() {
    int n;
    std::cout << "Введите двузначное число: ";
    std::cin >> n;
    int sum = n / 10 + n % 10;
    std::cout << "Сумма цифр: " << sum << std::endl;
    return 0;
}
