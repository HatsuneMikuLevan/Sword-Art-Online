

#include <iostream>

double multiply(int n, double a) {
    double result = 0.0;
    int abs_n = n > 0 ? n : -n;
    for (int i = 0; i < abs_n; ++i) {
        result += a;
    }
    if (n < 0) {
        result = -result;
    }
    return result;
}

int main() {
    int n;
    double a;
    std::cout << "Введите целое число n: ";
    std::cin >> n;
    std::cout << "Введите вещественное число a: ";
    std::cin >> a;
    double result = multiply(n, a);
    std::cout << "Произведение " << n << " и " << a << " равно " << result << std::endl;
    return 0;
}
