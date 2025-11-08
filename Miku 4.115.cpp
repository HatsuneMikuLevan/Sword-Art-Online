

#include <iostream>

int main() {
    int numbers[6];
    int sum = 0;

    std::cout << "Введите шесть целых чисел:" << std::endl;

    for (int i = 0; i < 6; ++i) {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 6; ++i) {
        if (numbers[i] > 0) {
            sum += numbers[i];
        }
    }

    std::cout << "Сумма положительных чисел: " << sum << std::endl;

    return 0;
}
