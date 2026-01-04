

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11180(std::vector<int>& arr) {
    if (arr.empty()) return;
    int last_element = arr[arr.size() - 1];
    for (size_t i = arr.size() - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_element;
}
