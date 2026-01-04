

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void solve_11185(std::vector<int>& arr, size_t k) {
    if (k >= arr.size() || k == 0) return;
    std::rotate(arr.begin(), arr.begin() + k, arr.end());
}
