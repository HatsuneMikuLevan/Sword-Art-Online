

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    const int size = 15;
    std::vector<double> x(size);

    std::cout << "Введите 15 вещественных чисел:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> x[i];
    }

    bool ordered = true;
    int violation_index = -1;

    for (int i = 0; i < size - 1; ++i) {
        if (x[i] > x[i+1]) {
            ordered = false;
            violation_index = i + 1; // Порядковый номер первого числа, нарушающего порядок
            break;
        }
    }

    if (ordered) {
        std::cout << "Последовательность упорядочена по возрастанию." << std::endl;
    } else {
        std::cout << "Последовательность не упорядочена по возрастанию. Первое число, нарушающее порядок, имеет номер: " << violation_index << std::endl;
    }

    return 0;
}
