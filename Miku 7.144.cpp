7.144

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_7144() {
    int n;
    std::cout << "Введите количество пар n: ";
    std::cin >> n;

    int max_sum = INT_MIN;
    int min_prod = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int a, b;
        std::cout << "Введите пару чисел (a, b) #" << i + 1 << ": ";
        std::cin >> a >> b;

        int current_sum = a + b;
        int current_prod = a * b;

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        if (current_prod < min_prod) {
            min_prod = current_prod;
        }
    }

    std::cout << "а) Максимальная сумма: " << max_sum << std::endl;
    std::cout << "б) Минимальное произведение: " << min_prod << std::endl;
}
