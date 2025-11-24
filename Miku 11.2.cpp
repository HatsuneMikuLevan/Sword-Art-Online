

#include <iostream>
#include <vector>

int main() {
    const int size = 10;
    std::vector<int> arr(size);

    std::cout << "Введите 10 целых чисел для массива 11.2:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Вывод массива для проверки
    std::cout << "Массив 11.2: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i == size - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
