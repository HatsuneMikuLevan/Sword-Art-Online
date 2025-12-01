

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool solve_11_132(const std::vector<int>& class_sizes) {
    if (class_sizes.empty()) {
        return false; 
    }
    int max_size = *std::max_element(class_sizes.begin(), class_sizes.end());
    int min_size = *std::min_element(class_sizes.begin(), class_sizes.end());
    return std::abs(max_size - min_size) == 10;
}

