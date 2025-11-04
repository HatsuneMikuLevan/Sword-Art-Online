

#include <iostream>
#include <vector>

// Структура для хранения дроби
struct Fraction {
    long long numerator;
    long long denominator;
};

// а) Найти k-й член этой последовательности
Fraction get_kth_fraction(int k) {
    if (k <= 0) return {0, 0};
    if (k == 1) return {1, 1};
    if (k == 2) return {2, 1};

    long long num_prev1 = 2, num_prev2 = 1;
    long long den_prev1 = 1, den_prev2 = 1;

    for (int i = 3; i <= k; ++i) {
        long long num_current = num_prev1 + num_prev2;
        long long den_current = den_prev1 + den_prev2;

        num_prev2 = num_prev1;
        num_prev1 = num_current;
        den_prev2 = den_prev1;
        den_prev1 = den_current;
    }
    return {num_prev1, den_prev1};
}

// б) Получить первые n членов этой последовательности
std::vector<Fraction> get_first_n_fractions(int n) {
    std::vector<Fraction> result;
    if (n <= 0) return result;
    result.push_back({1, 1});
    if (n == 1) return result;
    result.push_back({2, 1});
    if (n == 2) return result;

    long long num_prev1 = 2, num_prev2 = 1;
    long long den_prev1 = 1, den_prev2 = 1;

    for (int i = 3; i <= n; ++i) {
        long long num_current = num_prev1 + num_prev2;
        long long den_current = den_prev1 + den_prev2;
        result.push_back({num_current, den_current});

        num_prev2 = num_prev1;
        num_prev1 = num_current;
        den_prev2 = den_prev1;
        den_prev1 = den_current;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "n должно быть положительным числом." << std::endl;
        return 1;
    }

    // а)
    Fraction kth_fraction = get_kth_fraction(n);
    std::cout << n << "-й член последовательности: " << kth_fraction.numerator << "/" << kth_fraction.denominator << std::endl;

    // б)
    std::cout << "Первые " << n << " членов последовательности:" << std::endl;
    std::vector<Fraction> fractions = get_first_n_fractions(n);
    for (const auto& f : fractions) {
        std::cout << f.numerator << "/" << f.denominator << " ";
    }
    std::cout << std::endl;

    return 0;
}
