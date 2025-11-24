

#include <iostream>
#include <vector>
#include <random>

int main() {
    const int size = 12;
    std::vector<int> heights(size);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(163, 190);

    for (int i = 0; i < size; ++i) {
        heights[i] = dis(gen);
    }

    // Вывод массива для проверки
    std::cout << "Массив 11.5 (рост): ";
    for (int i = 0; i < size; ++i) {
        std::cout << heights[i] << (i == size - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
