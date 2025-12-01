

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string solve_11_134(const std::vector<int>& ages) {
    if (ages.empty()) {
        return "Список пуст";
    }
    int max_age = *std::max_element(ages.begin(), ages.end());
    int min_age = *std::min_element(ages.begin(), ages.end());
    int max_age_idx = -1;
    int min_age_idx = -1;

    for (int i = 0; i < ages.size(); ++i) {
        if (ages[i] == max_age && max_age_idx == -1) {
            max_age_idx = i;
        }
        if (ages[i] == min_age && min_age_idx == -1) {
            min_age_idx = i;
        }
        if (max_age_idx != -1 && min_age_idx != -1) {
            break;
        }
    }

    if (max_age_idx < min_age_idx) {
        return "Самый старый человек указан раньше";
    } else if (min_age_idx < max_age_idx) {
        return "Самый молодой человек указан раньше";
    } else {
        return "Возраста совпадают или одно и то же первое вхождение";
    }
}

