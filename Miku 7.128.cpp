

#include <iostream>
#include <vector>

int main() {
    std::vector<int> b = {12, 17, 25, 37, 40, 57, 60, 70, 87, 90, 107, 110};
    int first_index = 0;

    for (int i = 0; i < b.size(); ++i) {
        if (b[i] % 10 == 7 && first_index == 0) {
            first_index = i + 1;
        }
    }

    if (first_index != 0) {
        std::cout << "Последовательность содержит число, оканчивающееся на 7." << std::endl;
        std::cout << "Порядковый номер первого такого числа: " << first_index << std::endl;
    } else {
        std::cout << "Последовательность не содержит чисел, оканчивающихся на 7." << std::endl;
    }

    return 0;
}
