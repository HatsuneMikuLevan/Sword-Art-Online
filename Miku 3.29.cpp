#include <iostream>

// Функция для задачи 3.29 а)
int getUnits(int n) {
    return n % 10;
}

// Функция для задачи 3.29 б)
int getTens(int n) {
    return (n / 10) % 10;
}

int main() {
    int number = 123;
    std::cout << "a) " << getUnits(number) << std::endl;
    std::cout << "б) " << getTens(number) << std::endl;
    return 0;
}
