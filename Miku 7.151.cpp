

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_7_151(const std::vector<int>& seq) {
    int min_len = INT_MAX;
    int current_len = 0;
    for (int i = 0; i < seq.size(); ++i) {
        if (seq[i] == 0) {
            current_len++;
        } else {
            if (current_len > 0) {
                min_len = std::min(min_len, current_len);
            }
            current_len = 0;
        }
    }
    if (current_len > 0) {
        min_len = std::min(min_len, current_len);
    }
    if (min_len == INT_MAX) {
        std::cout << "Отрезков из нулей нет" << std::endl;
    } else {
        std::cout << "Минимальная длина отрезка из нулей: " << min_len << std::endl;
    }
}
