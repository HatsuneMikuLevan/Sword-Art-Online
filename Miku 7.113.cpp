

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 10;
    std::vector<int> a = {5, 12, 8, 15, 3, 10, 20, 1, 11, 9, 14, 6};
    long long sum_over_n = 0;
    int count_over_n = 0;

    for (int val : a) {
        if (val > n) {
            sum_over_n += val;
            count_over_n++;
        }
    }

    if (count_over_n > 0) {
        double avg_over_n = static_cast<double>(sum_over_n) / count_over_n;
        std::cout << "Среднее арифметическое чисел больше " << n << ": " << avg_over_n << std::endl;
    } else {
        std::cout << "Чисел больше " << n << " нет." << std::endl;
    }

    return 0;
}
