

#include <iostream>
#include <vector>

int main() {
    int n = 10;
    std::vector<long long> fib_series;
    if (n >= 1) fib_series.push_back(1);
    if (n >= 2) fib_series.push_back(1);

    long long a = 1, b = 1;
    for (int i = 3; i <= n; ++i) {
        long long next = a + b;
        fib_series.push_back(next);
        a = b;
        b = next;
    }

    std::cout << "Члены последовательности Фибоначчи с 3-го по 10-й:" << std::endl;
    for (int i = 2; i < n; ++i) {
        std::cout << (i + 1) << "-й член: " << fib_series[i] << std::endl;
    }

    return 0;
}
