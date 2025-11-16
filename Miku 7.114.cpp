

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> d = {5, 12, 8, 15, 3, 10, 20, 1, 11, 9, 14, 6, 18, 2};
    long long sum_even = 0;
    int count_even = 0;

    for (int val : d) {
        if (val % 2 == 0) {
            sum_even += val;
            count_even++;
        }
    }

    if (count_even > 0) {
        double avg_even = static_cast<double>(sum_even) / count_even;
        std::cout << "Среднее арифметическое четных чисел: " << avg_even << std::endl;
    } else {
        std::cout << "Четных чисел нет." << std::endl;
    }

    return 0;
}
