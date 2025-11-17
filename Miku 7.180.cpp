

#include <iostream>
#include <limits>

int main() {
    const int days_in_month = 30; // Пример: 30 дней
    int temperatures[days_in_month];
    int min_temp = std::numeric_limits<int>::max();
    int count_min_temp = 0;
    int i = 0;

    while (i < days_in_month) {
        std::cin >> temperatures[i];
        if (temperatures[i] < min_temp) {
            min_temp = temperatures[i];
            count_min_temp = 1;
        } else if (temperatures[i] == min_temp) {
            count_min_temp++;
        }
        i++;
    }

    std::cout << "Количество дней с самой низкой температурой: " << count_min_temp << std::endl;

    return 0;
}
