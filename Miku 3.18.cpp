#include <iostream>

int main() {
    int n;
    std::cout << "Введите двузначное число: ";
    std::cin >> n;
    int tens = n / 10;
    int units = n % 10;
    int reversed_n = units * 10 + tens;
    std::cout << "Число с переставленными цифрами: " << reversed_n << std::endl;
    return 0;
}
