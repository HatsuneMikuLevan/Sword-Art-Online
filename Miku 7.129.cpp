

#include <iostream>

int main() {
    int number;
    int index = 0;
    int first_multiple_of_7_index = 0;

    std::cout << "Введите последовательность целых чисел (окончание - -1):" << std::endl;

    while (true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        index++;

        if (number % 7 == 0 && first_multiple_of_7_index == 0) {
            first_multiple_of_7_index = index;
        }
    }

    if (first_multiple_of_7_index != 0) {
        std::cout << "Последовательность содержит число, кратное семи." << std::endl;
        std::cout << "Порядковый номер первого такого числа: " << first_multiple_of_7_index << std::endl;
    } else {
        std::cout << "Последовательность не содержит чисел, кратных семи." << std::endl;
    }

    return 0;
}
