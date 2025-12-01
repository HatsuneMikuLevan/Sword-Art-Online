

#include <iostream>
#include <vector>
#include <algorithm>

std::string solve_11_133(const std::vector<int>& arr) {
    if (arr.empty()) {
        return "Массив пуст";
    }
    int max_val = *std::max_element(arr.begin(), arr.end());
    int min_val = *std::min_element(arr.begin(), arr.end());
    int max_idx = -1;
    int min_idx = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == max_val && max_idx == -1) {
            max_idx = i;
        }
        if (arr[i] == min_val && min_idx == -1) {
            min_idx = i;
        }
        if (max_idx != -1 && min_idx != -1) {
            break;
        }
    }

    if (max_idx < min_idx) {
        return "Максимальное число встретится раньше";
    } else if (min_idx < max_idx) {
        return "Минимальное число встретится раньше";
    } else {
        return "Максимальное и минимальное числа совпадают или одно и то же первое вхождение";
    }
}

