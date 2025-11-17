

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
{
    int n = times.size();
    if (n == 0) return;

    double min_time = *std::min_element(times.begin(), times.end()); // First place
    double max_time = *std::max_element(times.begin(), times.end()); // Last place

    int win_index = -1;
    int last_place_index = -1;

    for (int i = 0; i < n; ++i) {
        if (times[i] == min_time && win_index == -1) {
            win_index = i;
        }
        if (times[i] == max_time && last_place_index == -1) {
            last_place_index = i;
        }
        if (win_index != -1 && last_place_index != -1) {
            break;
        }
    }

    if (win_index < last_place_index) {
        std::cout << "Да, этап, который он выиграл, был раньше этапа, на котором он занял последнее место." << std::endl;
    } else {
        std::cout << "Нет, этап, который он выиграл, не был раньше этапа, на котором он занял последнее место." << std::endl;
    }
}
