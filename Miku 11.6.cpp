

#include <iostream>
#include <vector>
#include <random>

int main() {
    const int size = 20;
    std::vector<int> weights(size);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(50, 100);

    for (int i = 0; i < size; ++i) {
        weights[i] = dis(gen);
    }

    // Вывод массива для проверки
    std::cout << "Массив 11.6 (вес): ";
    for (int i = 0; i < size; ++i) {
        std::cout << weights[i] << (i == size - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
