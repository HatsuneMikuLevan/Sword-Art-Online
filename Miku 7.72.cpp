

#include <iostream>
#include <vector>

int main() {
    // Пример массива вещественных чисел
    std::vector<double> numbers = {1.5, -2.3, 0.0, 4.1, -5.0, 6.7, -8.9};
    int positive_count = 0;
    int negative_count = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > 0) {
            positive_count++;
        } else if (numbers[i] < 0) {
            negative_count++;
        }
    }

    std::cout << "Количество положительных чисел: " << positive_count << std::endl;
    std::cout << "Количество отрицательных чисел: " << negative_count << std::endl;
    return 0;
}
