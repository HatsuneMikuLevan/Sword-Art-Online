

#include <iostream>

double power(double a, int n) {
    double result = 1.0;
    int abs_n = n > 0 ? n : -n;
    for (int i = 0; i < abs_n; ++i) {
        result *= a;
    }
    if (n < 0) {
        result = 1.0 / result;
    }
    return result;
}

int main() {
    double a;
    int n;
    std::cout << "Введите вещественное число a: ";
    std::cin >> a;
    std::cout << "Введите целое число n: ";
    std::cin >> n;
    double result = power(a, n);
    std::cout << a << " в степени " << n << " равно " << result << std::endl;
    return 0;
}
