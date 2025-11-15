

#include <iostream>
#include <vector>
#include <numeric>

void solve_755(const std::vector<int>& a, int m, int q) {
    int sum_le_m = 0;

    for (int num : a) {
        if (num <= m) {
            sum_le_m += num;
        }
    }

    bool cond = sum_le_m > q;

    std::cout << "Сумма чисел не больше m (" << m << ") превышает q (" << q << "): " << (cond ? "Верно" : "Неверно") << std::endl;
}
