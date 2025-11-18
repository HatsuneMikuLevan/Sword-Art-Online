

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a (0 < a < 1): ";
    std::cin >> a;

    int i = 1;
    double current_val = 1.0 / i;
    while (current_val >= a) {
        i++;
        current_val = 1.0 / i;
    }

    std::cout << "Первое число меньше a: " << current_val << " (при i = " << i << ")" << std::endl;

    return 0;
}
