

#include <iostream>
#include <vector>

void solve_7_132(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        std::cout << "Последовательность пуста." << std::endl;
        return;
    }

    int distinct_count = 1; // Всегда есть хотя бы одно число
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] != numbers[i - 1]) {
            distinct_count++;
        }
    }

    std::cout << "Количество различных чисел: " << distinct_count << std::endl;
}
