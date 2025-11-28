

#include <iostream>
#include <vector>
#include <numeric>

double calculate_average_above_ten(const std::vector<int>& arr) {
    int sum = 0;
    int count = 0;
    for (int element : arr) {
        if (element > 10) {
            sum += element;
            count++;
        }
    }

    if (count == 0) {
        return 0.0; // Возвращаем 0, если нет таких элементов
    }
    return static_cast<double>(sum) / count;
}

int main() {
    std::vector<int> data = {5, 12, 8, 20, 3, 15, 7, 25};
    double average = calculate_average_above_ten(data);

    std::cout << "Среднее арифметическое элементов больше 10: " << average << std::endl;

    return 0;
}
