

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
{
    int n = ages.size();
    if (n == 0) return;

    int max_age = *std::max_element(ages.begin(), ages.end());
    int min_age = *std::min_element(ages.begin(), ages.end());

    int first_max_index = -1;
    int first_min_index = -1;

    for (int i = 0; i < n; ++i) {
        if (ages[i] == max_age && first_max_index == -1) {
            first_max_index = i;
        }
        if (ages[i] == min_age && first_min_index == -1) {
            first_min_index = i;
        }
        if (first_max_index != -1 && first_min_index != -1) {
            break;
        }
    }

    if (first_max_index < first_min_index) {
        std::cout << "Раньше указан самый старший человек (возраст " << max_age << ")" << std::endl;
    } else if (first_min_index < first_max_index) {
        std::cout << "Раньше указан самый молодой человек (возраст " << min_age << ")" << std::endl;
    } else {
        std::cout << "Самый старший и самый молодой люди указаны на одной позиции (возраст " << max_age << ")" << std::endl;
    }
}

