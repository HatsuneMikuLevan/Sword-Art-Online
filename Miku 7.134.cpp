

#include <iostream>
#include <vector>

void solve_7_134() {
    std::cout << "Введите невозрастающую последовательность вещественных чисел (завершите ввод числом 0):" << std::endl;
    std::vector<double> numbers;
    double input;
    while (std::cin >> input && input != 0.0) {
        numbers.push_back(input);
    }

    if (numbers.empty()) {
        std::cout << "Последовательность пуста." << std::endl;
        return;
    }
    // Логика подсчета аналогична 7.132
    int distinct_count = 1;
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] != numbers[i - 1]) {
            distinct_count++;
        }
    }
    std::cout << "Количество различных чисел: " << distinct_count << std::endl;
}
