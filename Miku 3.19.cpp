#include <iostream>

int main() {
    int n;
    std::cout << "Введите трехзначное число: ";
    std::cin >> n;
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;
    std::cout << hundreds << ", " << tens << ", " << units << std::endl;
    return 0;
}
