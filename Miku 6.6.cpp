

#include <iostream>

void solve_6_6() {
    long long factorial_known;
    std::cout << "Введите факториал числа: ";
    std::cin >> factorial_known;

    long long factorial_calculated = 1;
    int n = 1;

    while (factorial_calculated < factorial_known) {
        n++;
        factorial_calculated *= n;
    }

    if (factorial_calculated == factorial_known) {
        std::cout << "Число, факториал которого равен " << factorial_known << ": " << n << std::endl;
    } else {
        std::cout << "Данное число не является факториалом натурального числа." << std::endl;
    }
}
