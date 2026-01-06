

#include <iostream>
#include <vector>

int main() {
    const int originalSize = 20;
    const int newSize = 10;
    std::vector<int> originalArray(originalSize);
    std::vector<int> evenIndexElements(newSize);
    std::vector<int> oddIndexElements(newSize);

    // Заполнение исходного массива случайными числами для примера
    for (int i = 0; i < originalSize; ++i) {
        originalArray[i] = i + 1; // Пример значений
    }

    // Распределение элементов по новым массивам
    for (int i = 0; i < originalSize; ++i) {
        if (i % 2 == 0) {
            evenIndexElements[i / 2] = originalArray[i];
        } else {
            oddIndexElements[i / 2] = originalArray[i];
        }
    }

    // Вывод результатов
    std::cout << "Массив с четными индексами: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << evenIndexElements[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Массив с нечетными индексами: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << oddIndexElements[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
