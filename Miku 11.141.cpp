

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11_141(const std::vector<int>& birth_years) {
    if (birth_years.size() < 2) {
        std::cout << "Недостаточно данных для определения двух самых старших людей." << std::endl;
        return;
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int year : birth_years) {
        if (year < min1) {
            min2 = min1;
            min1 = year;
        } else if (year < min2 && year != min1) {
            min2 = year;
        }
    }

    std::cout << "Годы рождения двух самых старших людей: " << min1 << " и " << min2 << std::endl;
}
