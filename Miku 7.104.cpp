

#include <iostream>
#include <vector>
#include <numeric>

bool areAllElementsEqual(const std::vector<int>& sequence) {
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
    std::vector<int> numbers = {5, 5, 5, 5, 5};
    // std::vector<int> numbers = {5, 5, 6, 5, 5};

    if (areAllElementsEqual(numbers)) {
        std::cout << "Все элементы последовательности равны между собой." << std::endl;
    } else {
        std::cout << "Не все элементы последовательности равны между собой." << std::endl;
    }

    return 0;
}
