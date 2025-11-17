

#include <iostream>
#include <vector>
#include <algorithm>

void solve_7_154(const std::vector<int>& seq) {
    if (seq.empty()) {
        std::cout << "Последовательность пуста." << std::endl;
        return;
    }
    int max_count = 1;
    int current_count = 1;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] == seq[i - 1]) {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
            }
            current_count = 1;
        }
    }
    if (current_count > max_count) {
        max_count = current_count;
    }
    std::cout << "Наибольшее количество подряд идущих одинаковых элементов: " << max_count << std::endl;
}
