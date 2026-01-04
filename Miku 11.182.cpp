

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11182(std::vector<int>& arr, size_t s, size_t k) {
    if (s <= k  s > arr.size()  k == 0) return;
    int s_element = arr[s - 1];
    for (size_t i = s - 1; i >= k; --i) {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = s_element;
}
