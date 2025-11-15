

#include <iostream>
#include <vector>
#include <numeric>

void solve_752(const std::vector<int>& b) {
    int sum_gt_20 = 0;
    int sum_lt_50 = 0;

    for (int num : b) {
        if (num > 20) {
            sum_gt_20 += num;
        }
        if (num < 50) {
            sum_lt_50 += num;
        }
    }

    bool cond_a = sum_gt_20 > 100;
    bool cond_b = sum_lt_50 % 2 == 0;

    std::cout << "а) Сумма чисел больше 20 превышает 100: " << (cond_a ? "Верно" : "Неверно") << std::endl;
    std::cout << "б) Сумма чисел меньше 50 является четным числом: " << (cond_b ? "Верно" : "Неверно") << std::endl;
}
