
#include <iostream>
#include <algorithm>
#include <vector>

void removeElementByIndex(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = 0;
    }
}

void removeElementByValue(int arr[], int& size, int value) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        removeElementByIndex(arr, size, index);
    }
}

int main() {
    const int initialSize = 25;
    int arr[initialSize] = {190, 185, 180, 175, 170, 165, 160, 155, 150, 145, 140, 135, 130, 125, 120, 115, 110, 105, 100, 95, 90, 85, 80, 75, 70};
    int size = initialSize;

    // Случай 1: известны порядковые номера (например, 3-й и 7-й элементы)
    int index1 = 2; // 3-й элемент (индекс 2)
    int index2 = 6; // 7-й элемент (индекс 6)
    if (index1 > index2) std::swap(index1, index2);
    removeElementByIndex(arr, size, index2);
    removeElementByIndex(arr, size, index1);

    std::cout << "Массив после удаления по индексам:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Восстановление массива для Случая 2
    int arr2[initialSize] = {190, 185, 180, 175, 170, 165, 160, 155, 150, 145, 140, 135, 130, 125, 120, 115, 110, 105, 100, 95, 90, 85, 80, 75, 70};
    size = initialSize;

    // Случай 2: известны значения роста (например, 175 и 140)
    int value1 = 175;
    int value2 = 140;
    removeElementByValue(arr2, size, value1);
    removeElementByValue(arr2, size, value2);

    std::cout << "Массив после удаления по значениям:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
