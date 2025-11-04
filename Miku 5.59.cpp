

#include <iostream>

long long factorial(int n) {
    if (n < 0) {
        return -1; // Возвращаем ошибку для отрицательных чисел
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    long long result = factorial(n);
    if (result != -1) {
        std::cout << "Факториал числа " << n << " равен " << result << std::endl;
    } else {
        std::cout << "Факториал для отрицательного числа не определен." << std::endl;
    }
    return 0;
}
