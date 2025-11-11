

#include <iostream>

int main() {
    int num;
    int sum = 0;
    int count = 0;
    std::cout << "Введите последовательность неотрицательных целых чисел (отрицательное число для завершения): ";

    while (std::cin >> num && num >= 0) {
        sum += num;
        count++;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое неотрицательных чисел: " << average << std::endl;
    } else {
        std::cout << "Последовательность не содержала неотрицательных чисел." << std::endl;
    }

    return 0;
}
