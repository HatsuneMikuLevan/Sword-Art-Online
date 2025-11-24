

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Пример массива

    std::cout << "Массив в обратном порядке (цикл): ";
    for (int i = arr.size() - 1; i >= 0; --i) {
        std::cout << arr[i] << (i == 0 ? "" : ", ");
    }
    std::cout << std::endl;

    std::cout << "Массив в обратном порядке (итераторы): ";
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        std::cout << *it << (it + 1 == arr.rend() ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
