

#include <iostream>
#include <vector>
#include <numeric>

void solve_754(const std::vector<double>& d, double p) {
    double sum_gt_20_5 = 0.0;

    for (double num : d) {
        if (num > 20.5) {
            sum_gt_20_5 += num;
        }
    }

    bool cond = sum_gt_20_5 < p;

    std::cout << "Сумма чисел больше 20.5 меньше p (" << p << "): " << (cond ? "Верно" : "Неверно") << std::endl;
}
