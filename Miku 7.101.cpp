

#include <iostream>
#include <vector>

int main() {
    std::vector<double> x;
    double input_val;
    std::cout << "Введите последовательность чисел, завершите ввод числом 10000:" << std::endl;

    while (std::cin >> input_val && input_val != 10000) {
        x.push_back(input_val);
    }

    if (x.size() < 2) {
        std::cout << "Количество чисел в последовательности меньше двух." << std::endl;
        return 1;
    }

    bool is_ordered = true;
    int violation_index = -1;

    for (size_t i = 1; i < x.size(); ++i) {
        if (x[i] <= x[i - 1]) {
            is_ordered = false;
            violation_index = static_cast<int>(i + 1);
            break;
        }
    }

    if (is_ordered) {
        std::cout << "Последовательность упорядочена по возрастанию." << std::endl;
    } else {
        std::cout << "Последовательность не упорядочена по возрастанию." << std::endl;
        std::cout << "Порядковый номер первого числа, нарушающего упорядоченность: " << violation_index << std::endl;
    }

    return 0;
}
