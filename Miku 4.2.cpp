#include <iostream>
#include <cmath>

double calculateY_4_2(double x) {
    if (x > 0) {
        return pow(sin(x), 2);
    } else {
        return 1 - 2 * sin(pow(x, 2));
    }
}

int main() {
    double x_val;
    std::cout << "Введите значение x: ";
    std::cin >> x_val;
    double y_val = calculateY_4_2(x_val);
    std::cout << "Значение y = " << y_val << std::endl;
    return 0;
}
