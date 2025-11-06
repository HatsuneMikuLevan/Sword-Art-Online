6.74

#include <iostream>

void solve6_74() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Число не является степенью 3 или 5." << std::endl;
        return;
    }

    // Проверка на степень 3
    int temp3 = n;
    while (temp3 > 1 && temp3 % 3 == 0) {
        temp3 /= 3;
    }
    if (temp3 == 1) {
        std::cout << "(a) Число является степенью числа 3." << std::endl;
    } else {
        std::cout << "(a) Число не является степенью числа 3." << std::endl;
    }

    // Проверка на степень 5
    int temp5 = n;
    while (temp5 > 1 && temp5 % 5 == 0) {
        temp5 /= 5;
    }
    if (temp5 == 1) {
        std::cout << "(б) Число является степенью числа 5." << std::endl;
    } else {
        std::cout << "(б) Число не является степенью числа 5." << std::endl;
    }
}
