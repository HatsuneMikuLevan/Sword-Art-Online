

#include <iostream>

int main() {
    int f_prev2 = 1;
    int f_prev1 = 1;
    int current_f = 0;
    int sum = 2; // Сумма первых двух членов (1 + 1)

    while (current_f <= 1000) {
        current_f = f_prev1 + f_prev2;
        if (current_f <= 1000) {
            sum += current_f;
        }
        f_prev2 = f_prev1;
        f_prev1 = current_f;
    }

    std::cout << "Сумма чисел Фибоначчи, не превосходящих 1000: " << sum << std::endl;

    return 0;
}
#include <iostream>

int main() {
    int n;
    std::cout << "Введите значение n (n > 1): ";
    std::cin >> n;

    int f_prev2 = 1;
    int f_prev1 = 1;
    int current_f = 0;

    while (current_f <= n) {
        current_f = f_prev1 + f_prev2;
        f_prev2 = f_prev1;
        f_prev1 = current_f;
    }

    std::cout << "Первое число Фибоначчи, большее n: " << current_f << std::endl;

    return 0;
}
