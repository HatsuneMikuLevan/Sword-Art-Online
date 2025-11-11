

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cout << "Введите количество чисел (n): ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "n должно быть натуральным числом." << std::endl;
        return 1;
    }

    std::vector<double> a(n);
    double sum = 0.0;
    std::cout << "Введите " << n << " вещественных чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        sum += a[i];
    }

    double average = sum / n;
    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}
