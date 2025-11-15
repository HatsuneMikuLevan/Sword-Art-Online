

#include <iostream>
#include <vector>
#include <numeric>

void solve_753(const std::vector<int>& m) {
    int sum_lt_25_5 = 0;
    int sum_le_20 = 0;

    for (int num : m) {
        if (num < 25.5) {
            sum_lt_25_5 += num;
        }
        if (num <= 20) {
            sum_le_20 += num;
        }
    }

    bool cond_a = sum_lt_25_5 <= 50;
    bool cond_b = sum_le_20 % 3 == 0;

    std::cout << "а) Сумма чисел меньше 25.5 не превышает 50: " << (cond_a ? "Верно" : "Неверно") << std::endl;
    std::cout << "б) Сумма чисел не превышающих 20 кратна трем: " << (cond_b ? "Верно" : "Неверно") << std::endl;
}
