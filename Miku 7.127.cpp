

#include <iostream>

int main() {
    int number;
    int index = 0;
    int first_666_index = 0;

    std::cout << "Введите последовательность целых чисел (окончание - 100):" << std::endl;

    while (true) {
        std::cin >> number;
        index++;

        if (number == 666 && first_666_index == 0) {
            first_666_index = index;
        }

        if (number == 100) {
            break; // Выход из цикла при достижении 100
        }
    }

    if (first_666_index != 0) {
        std::cout << "Число 666 найдено в последовательности." << std::endl;
        std::cout << "Порядковый номер первого вхождения: " << first_666_index << std::endl;
    } else {
        std::cout << "Число 666 не найдено в последовательности." << std::endl;
    }

    return 0;
}
