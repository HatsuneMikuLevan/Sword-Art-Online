

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 15; // Пример значения n
    std::vector<int> a = {10, 25, 5, 30, 12, 18, 40, 8, 2, 50, 1, 3};
    int sum = 0;
    int count = 0;
    for (int val : a) {
        if (val > n) {
            sum += val;
            count++;
        }
    }
    // По условию задачи, числа больше n имеются.
    double average = static_cast<double>(sum) / count;
    std::cout << "Среднее арифметическое чисел больше n: " << average << std::endl;
    return 0;
}
