

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 3;
    std::vector<int> a = {5, 12, 8, 15, 3, 10, 20, 1, 11, 9, 14, 6};
    long long sum_multiple_n = 0;
    int count_multiple_n = 0;

    for (int val : a) {
        if (val % n == 0) {
            sum_multiple_n += val;
            count_multiple_n++;
        }
    }

    if (count_multiple_n > 0) {
        double avg_multiple_n = static_cast<double>(sum_multiple_n) / count_multiple_n;
        std::cout << "Среднее арифметическое чисел, кратных " << n << ": " << avg_multiple_n << std::endl;
    } else {
        std::cout << "Чисел, кратных " << n << ", нет." << std::endl;
    }

    return 0;
}
