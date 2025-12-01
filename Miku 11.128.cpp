

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11128(const std::vector<double>& july_temperatures) {
    if (july_temperatures.empty()) {
        std::cout << "Данные о температуре отсутствуют." << std::endl;
        return;
    }

    double min_temp = INT_MAX;
    int count = 0;

    for (double temp : july_temperatures) {
        if (temp < min_temp) {
            min_temp = temp;
            count = 1;
        } else if (temp == min_temp) {
            count++;
        }
    }

    std::cout << "Самая прохладная температура: " << min_temp << ", количество дней: " << count << std::endl;
}

int main() {
    std::vector<double> july_temperatures = {25.5, 20.1, 22.0, 20.1, 28.0, 20.1};
    solve_11128(july_temperatures);
    return 0;
}
