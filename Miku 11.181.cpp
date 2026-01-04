

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11181(std::vector<int>& arr, size_t k) {
    if (arr.empty()  k == 0  k > arr.size()) return;
    int last_element = arr[arr.size() - 1];
    for (size_t i = arr.size() - 1; i >= k; --i) {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = last_element;
}
