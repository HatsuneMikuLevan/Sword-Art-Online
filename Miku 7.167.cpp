

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
{
    int n = x.size();
    if (n == 0) return;

    int max_val = *std::max_element(x.begin(), x.end());
    int min_val = *std::min_element(x.begin(), x.end());

    int first_max_index = -1;
    int first_min_index = -1;

    for (int i = 0; i < n; ++i) {
        if (x[i] == max_val && first_max_index == -1) {
            first_max_index = i;
        }
        if (x[i] == min_val && first_min_index == -1) {
            first_min_index = i;
        }
        if (first_max_index != -1 && first_min_index != -1) {
            break;
        }
    }

    if (first_max_index < first_min_index) {
        std::cout << "Раньше встретится максимальное число: " << max_val << std::endl;
    } else if (first_min_index < first_max_index) {
        std::cout << "Раньше встретится минимальное число: " << min_val << std::endl;
    } else {
        std::cout << "Максимальное и минимальное числа встретились одновременно (на одной позиции): " << max_val << std::endl;
    }
}

