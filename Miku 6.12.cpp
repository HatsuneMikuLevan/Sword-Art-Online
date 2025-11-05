

#include <iostream>

void solve_6_12() {
    int num;
    do {
        std::cout << "Введите число: ";
        std::cin >> num;
        std::cout << "Вы ввели число: " << num << std::endl;
    } while (num != 0);
}
