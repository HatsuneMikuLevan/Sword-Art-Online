

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {10, 20, 30, 40, 50}; // Пример массива
    int index;

    std::cout << "Введите индекс элемента для вывода (от 0 до " << arr.size() - 1 << "): ";
    std::cin >> index;

    if (index >= 0 && index < arr.size()) {
        std::cout << "Элемент с индексом " << index << ": " << arr[index] << std::endl;
    } else {
        std::cout << "Неверный индекс." << std::endl;
    }

    return 0;
}
