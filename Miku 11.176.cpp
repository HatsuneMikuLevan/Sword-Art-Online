

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11176(std::vector<int>& arr) {
    if (arr.empty()) return;
    int first_element = arr[0];
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = first_element;
}
