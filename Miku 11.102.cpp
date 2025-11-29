

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <limits>

int main() {
    std::vector<double> arr = { /* Вставьте элементы массива здесь */ };
    int n = arr.size();

    if (n == 0) {
        std::cout << "Массив пуст." << std::endl;
        return 1;
    }

    double sum = std::accumulate(arr.begin(), arr.end(), 0.0);
    double average = sum / n;

    double closest_element = arr[0];
    double min_deviation = std::abs(arr[0] - average);

    for (int i = 1; i < n; ++i) {
        double current_deviation = std::abs(arr[i] - average);
        if (current_deviation < min_deviation) {
            min_deviation = current_deviation;
            closest_element = arr[i];
        }
    }

    std::cout << "Среднее значение: " << average << std::endl;
    std::cout << "Элемент, наиболее близкий к среднему: " << closest_element << std::endl;

    return 0;
}
