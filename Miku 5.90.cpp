

#include <iostream>

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;

    long long a = 0, b = 1;
    long long sum_fib = 0;

    for (int i = 0; i < n; ++i) {
        sum_fib += a;
        long long next_fib = a + b;
        a = b;
        b = next_fib;
    }

    if (sum_fib % 2 == 0) {
        std::cout << "Сумма первых " << n << " членов последовательности Фибоначчи является четным числом." << std::endl;
    } else {
        std::cout << "Сумма первых " << n << " членов последовательности Фибоначчи является нечетным числом." << std::endl;
    }
    return 0;
}
