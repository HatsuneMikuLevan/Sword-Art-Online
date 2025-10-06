#include <iostream>

int main() {
    int n;
    std::cout << "Введите двузначное число: ";
    std::cin >> n;
    int tens = n / 10;
    int units = n % 10;
    std::cout << "а) Число десятков: " << tens << std::endl;
    std::cout << "б) Число единиц: " << units << std::endl;
    return 0;
}
