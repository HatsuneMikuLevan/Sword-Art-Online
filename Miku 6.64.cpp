

#include <iostream>
#include <vector>
#include <algorithm>

void solve_6_64(int n) {
    std::vector<int> denominations = {61, 32, 16, 8, 4, 2, 1};
    std::vector<int> counts(denominations.size(), 0);
    int total_count = 0;
    int remaining_sum = n;

    for (size_t i = 0; i < denominations.size(); ++i) {
        int current_denomination = denominations[i];
        while (remaining_sum >= current_denomination) {
            remaining_sum -= current_denomination;
            counts[i]++;
            total_count++;
        }
    }

    std::cout << "6.64. Наименьшее количество купюр для суммы " << n << ":" << std::endl;
    std::cout << "Общее количество купюр: " << total_count << std::endl;
    for (size_t i = 0; i < denominations.size(); ++i) {
        if (counts[i] > 0) {
            std::cout << "Купюр достоинством " << denominations[i] << ": " << counts[i] << std::endl;
        }
    }
}
