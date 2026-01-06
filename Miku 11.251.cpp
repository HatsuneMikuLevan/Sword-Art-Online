

#include <iostream>
#include <vector>

int main() {
    std::vector<int> original_array = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = original_array.size();
    std::vector<int> same_place_array(size, 0); // Инициализация нулями
    std::vector<int> consecutive_array;

    for (int i = 0; i < size; ++i) {
        if (original_array[i] % 2 != 0) { // Если элемент нечетный
            // а) на тех же местах, что и в исходном массиве
            same_place_array[i] = original_array[i];
            // б) подряд с начала массива
            consecutive_array.push_back(original_array[i]);
        }
    }

    std::cout << "Original array: ";
    for (int val : original_array) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Same place array (0 for empty): ";
    for (int val : same_place_array) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Consecutive array: ";
    for (int val : consecutive_array) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
