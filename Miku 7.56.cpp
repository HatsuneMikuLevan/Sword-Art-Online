

#include <iostream>
#include <vector>
#include <numeric>

void solve_756(const std::vector<int>& c, int m, int p) {
    int sum_le_m = 0;

    for (int num : c) {
        if (num <= m) {
            sum_le_m += num;
        }
    }

    bool cond = sum_le_m % p == 0;

    std::cout << "Сумма чисел не превышающих m (" << m << ") кратна p (" << p << "): " << (cond ? "Верно" : "Неверно") << std::endl;
}
