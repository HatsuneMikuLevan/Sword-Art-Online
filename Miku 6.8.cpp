

#include <iostream>

void solve_6_8() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    int i = 1;
    while (i * i <= n) {
        i++;
    }
    std::cout << "Первое натуральное число, квадрат которого больше " << n << ": " << i << std::endl;
}
