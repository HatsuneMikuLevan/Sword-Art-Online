

#include <iostream>

void solve6_71() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Число не является членом последовательности Фибоначчи." << std::endl;
        return;
    }

    if (n == 0 || n == 1) {
        std::cout << "Число является членом последовательности Фибоначчи." << std::endl;
        return;
    }

    int a = 0, b = 1;
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    if (b == n) {
        std::cout << "Число является членом последовательности Фибоначчи." << std::endl;
    } else {
        std::cout << "Число не является членом последовательности Фибоначчи." << std::endl;
    }
}
