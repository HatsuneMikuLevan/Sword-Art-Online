

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int size = 12;
    std::vector<int> arr(size);

    // Заполнение последовательными значениями, начиная с 1
    std::iota(arr.begin(), arr.end(), 1);

    // Вывод массива для проверки
    std::cout << "Массив 11.10: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i == size - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
