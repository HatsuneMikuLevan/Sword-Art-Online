#include <iostream>

// Функция для задачи 3.31 а)
int getHundreds(int n) {
    return (n / 100) % 10;
}

// Функция для задачи 3.31 б)
int getThousands(int n) {
    return (n / 1000) % 10;
}

int main() {
    int number = 12345;
    std::cout << "a) " << getHundreds(number) << std::endl;
    std::cout << "б) " << getThousands(number) << std::endl;
    return 0;
}
