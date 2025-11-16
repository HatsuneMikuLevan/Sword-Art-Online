

#include <iostream>
#include <vector>
#include <algorithm>

void solve_7_131(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        std::cout << "Последовательность пуста." << std::endl;
        return;
    }

    int max_count = 1;
    int current_count = 1;

    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] == numbers[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }
        if (current_count > max_count) {
            max_count = current_count;
        }
    }

    std::cout << "Максимальное количество подряд идущих равных чисел: " << max_count << std::endl;
}
