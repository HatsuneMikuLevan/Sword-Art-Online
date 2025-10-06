#include <iostream>

// Функция для задачи 3.30 а)
int getTens(int n) {
    return (n / 10) % 10;
}

// Функция для задачи 3.30 б)
int getHundreds(int n) {
    return (n / 100) % 10;
}

int main() {
    int number = 1234;
    std::cout << "a) " << getTens(number) << std::endl;
    std::cout << "б) " << getHundreds(number) << std::endl;
    return 0;
}
