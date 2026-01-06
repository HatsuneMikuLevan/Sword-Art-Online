

#include <iostream>
#include <vector>
#include <string>

void solve_11231_1(const std::vector<int>& scored, const std::vector<int>& missed) {
    std::cout << "--- Способ 1: без использования дополнительного массива ---\n";
    for (size_t i = 0; i < scored.size(); ++i) {
        std::string result;
        if (scored[i] > missed[i]) {
            result = "выигрыш";
        } else if (scored[i] < missed[i]) {
            result = "проигрыш";
        } else {
            result = "ничья";
        }
        std::cout << "Игра " << (i + 1) << ": " << result << "\n";
    }
}
