

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>


void solve_11_136(const std::vector<int>& wind_data) {

    std::map<int, int> wind_frequency;
    for (int direction : wind_data) {
        wind_frequency[direction]++;
    }


    int min_freq = INT_MAX;
    int best_direction = -1;
    for (const auto& pair : wind_frequency) {
        if (pair.second < min_freq) {
            min_freq = pair.second;
            best_direction = pair.first;
        }
    }


    std::cout << "11.136. Рекомендуемое расположение жилого комплекса (направление от комбината): ";
    switch (best_direction) {
        case 1: std::cout << "Южное (противоположно северному)" << std::endl; break;
        case 2: std::cout << "Северное (противоположно южному)" << std::endl; break;
        case 3: std::cout << "Западное (противоположно восточному)" << std::endl; break;
        case 4: std::cout << "Восточное (противоположно западному)" << std::endl; break;

        default: std::cout << "Неизвестно" << std::endl; break;
    }
}


void solve_11_137(const std::vector<int>& arr) {
    if (arr.empty()) return;


    int max1 = INT_MIN, max2 = INT_MIN;
    int idx_max1 = -1, idx_max2 = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            idx_max2 = idx_max1;
            max1 = arr[i];
            idx_max1 = i;
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
            idx_max2 = i;
        }
    }

    // б) Минимальный элемент и второй минимальный
    int min1 = INT_MAX, min2 = INT_MAX;
    int idx_min1 = -1, idx_min2 = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < min1) {
            min2 = min1;
            idx_min2 = idx_min1;
            min1 = arr[i];
            idx_min1 = i;
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
            idx_min2 = i;
        }
    }

    std::cout << "11.137." << std::endl;
    std::cout << "а) Максимальный элемент: " << max1 << ", второй максимальный: " << max2 << std::endl;
    std::cout << "б) Минимальный элемент: " << min1 << ", второй минимальный: " << min2 << std::endl;
    std::cout << "в) Номера максимального элемента: " << idx_max1 << ", второго максимального: " << idx_max2 << std::endl;
    std::cout << "г) Номера минимального элемента: " << idx_min1 << ", второго минимального: " << idx_min2 << std::endl;
}

int main() {

    std::vector<int> wind_data = {1, 2, 3, 4, 5, 6, 7, 8, 1, 1, 2, 3, 4, 1};
    solve_11_136(wind_data);

    std::cout << "---" << std::endl;


    std::vector<int> data_arr = {10, 5, 20, 15, 3, 20, 1};
    solve_11_137(data_arr);

    return 0;
}
