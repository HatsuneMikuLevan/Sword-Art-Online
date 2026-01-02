

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11_144(const std::vector<int>& people_per_floor) {
    if (people_per_floor.size() < 2) {
        std::cout << "Недостаточно данных." << std::endl;
        return;
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int floor1 = -1;
    int floor2 = -1;

    for (int i = 0; i < people_per_floor.size(); ++i) {
        if (people_per_floor[i] < min1) {
            min2 = min1;
            floor2 = floor1;
            min1 = people_per_floor[i];
            floor1 = i + 1; // Этажи нумеруются с 1
        } else if (people_per_floor[i] < min2 && people_per_floor[i] != min1) {
            min2 = people_per_floor[i];
            floor2 = i + 1;
        }
    }

    std::cout << "Два этажа, на которых проживает меньше всего людей: " << floor1 << " и " << floor2 << std::endl;
}
