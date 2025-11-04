

#include <iostream>
#include <vector>

// а) Найти n-й член последовательности Фибоначчи
long long fibonacci_n(int n) {
    if (n <= 0) return 0;
    if (n <= 2) return 1;

    long long a = 1, b = 1;
    for (int i = 3; i <= n; ++i) {
        long long next = a + b;
        a = b;
        b = next;
    }
    return b;
}

// б) Получить первые n членов последовательности
std::vector<long long> fibonacci_first_n(int n) {
    std::vector<long long> result;
    if (n <= 0) return result;
    result.push_back(1);
    if (n == 1) return result;
    result.push_back(1);
    if (n == 2) return result;

    long long a = 1, b = 1;
    for (int i = 3; i <= n; ++i) {
        long long next = a + b;
        result.push_back(next);
        a = b;
        b = next;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Введите натуральное число n (n > 3): ";
    std::cin >> n;

    if (n <= 3) {
        std::cout << "n должно быть больше 3." << std::endl;
        return 1;
    }

    // а)
    std::cout << "n-й член последовательности Фибоначчи: " << fibonacci_n(n) << std::endl;

    // б)
    std::cout << "Первые " << n << " членов последовательности Фибоначчи: ";
    std::vector<long long> fib_series = fibonacci_first_n(n);
    for (long long val : fib_series) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
