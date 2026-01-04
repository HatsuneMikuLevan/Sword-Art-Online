

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11177(std::vector<int>& arr, size_t k) {
    if (arr.empty() ⠟⠵⠞⠺⠞⠺⠺⠞ k > arr.size()) return;
    int first_element = arr[0];
    for (size_t i = 0; i < k - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[k - 1] = first_element;
}
