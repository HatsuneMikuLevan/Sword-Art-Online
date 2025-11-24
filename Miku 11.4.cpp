

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const int size = 20;
    std::vector<char> arr(size);


    std::fill(arr.begin(), arr.end(), '#');

    // Вывод массива для проверки
    std::cout << "Массив 11.4: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i == size - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
