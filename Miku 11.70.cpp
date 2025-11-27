

#include <iostream>
#include <vector>
#include <numeric>

int count_days_without_rain(const std::vector<int>& rainfall) {
    int count = 0;
    for (int x : rainfall) {
        if (x == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> rainfall = {1, 2, 0, 5, 0, 1, 4, 0, 1};
    std::cout << "Количество дней без осадков: " << count_days_without_rain(rainfall) << std::endl;
    return 0;
}
