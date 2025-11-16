

#include <iostream>
#include <vector>
#include <numeric>

bool areAllElementsEqualTerminated(const std::vector<int>& sequence) {
    if (sequence.empty() || sequence.size() == 1) {
        return true;
    }
    int firstElement = sequence[0];
    for (size_t i = 1; i < sequence.size(); ++i) {
        if (sequence[i] != firstElement) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers;
    int num;
    std::cout << "Введите последовательность целых чисел (отрицательное число для завершения):" << std::endl;

    while (std::cin >> num && num >= 0) {
        numbers.push_back(num);
    }

    if (numbers.empty()) {
        std::cout << "Последовательность пуста (кроме завершающего числа)." << std::endl;
    } else if (areAllElementsEqualTerminated(numbers)) {
        std::cout << "Все элементы последовательности равны между собой." << std::endl;
    } else {
        std::cout << "Не все элементы последовательности равны между собой." << std::endl;
    }

    return 0;
}
