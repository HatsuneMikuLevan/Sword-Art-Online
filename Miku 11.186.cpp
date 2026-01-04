

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11186(std::vector<int>& arr) {
    if (arr.size() != 12) return;
    std::vector<int> original = arr;
    for (size_t i = 0; i < 6; ++i) {
        arr[2 * i] = original[i];
        arr[2 * i + 1] = original[11 - i];
    }
}
