

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 5; // Пример значения n
    std::vector<int> b = {10, 25, 4, 30, 12, 18, 40, 8, 2, 50, 1, 3};
    int sum = 0;
    int count = 0;
    for (int val : b) {
        if (val % n == 0) {
            sum += val;
            count++;
        }
    }
    // По условию задачи, числа, кратные n, имеются.
    double average = static_cast<double>(sum) / count;
    std::cout << "Среднее арифметическое чисел, кратных n: " << average << std::endl;
    return 0;
}
