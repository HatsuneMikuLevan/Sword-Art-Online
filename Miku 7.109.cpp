

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int sum_even = 0;
    int count_even = 0;
    int sum_odd = 0;
    int count_odd = 0;
    for (int val : numbers) {
        if (val % 2 == 0) {
            sum_even += val;
            count_even++;
        } else {
            sum_odd += val;
            count_odd++;
        }
    }
    double average_even = static_cast<double>(sum_even) / count_even;
    double average_odd = static_cast<double>(sum_odd) / count_odd;
    std::cout << "Среднее арифметическое четных чисел: " << average_even << std::endl;
    std::cout << "Среднее арифметическое нечетных чисел: " << average_odd << std::endl;
    return 0;
}
