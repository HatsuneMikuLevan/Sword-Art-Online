

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11126(const std::vector<int>& rainfall_data) {
    if (rainfall_data.empty()) {
        std::cout << "Данные об осадках отсутствуют." << std::endl;
        return;
    }

    int max_rainfall = INT_MIN;
    int count = 0;

    for (int rainfall : rainfall_data) {
        if (rainfall > max_rainfall) {
            max_rainfall = rainfall;
            count = 1;
        } else if (rainfall == max_rainfall) {
            count++;
        }
    }

    std::cout << "Самое большое число осадков: " << max_rainfall << ", количество дней: " << count << std::endl;
}

int main() {
    std::vector<int> rainfall_data = {0, 5, 10, 10, 2, 0, 10, 5};
    solve_11126(rainfall_data);
    return 0;
}
