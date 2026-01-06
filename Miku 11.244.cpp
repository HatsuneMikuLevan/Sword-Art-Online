

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> original_array = {1, 2, 3, 4, 5};
    int size = original_array.size();
    std::vector<int> same_order_array(size);
    std::vector<int> reverse_order_array(size);

    // а) в том же порядке расположения элементов
    for (int i = 0; i < size; ++i) {
        same_order_array[i] = original_array[i];
    }

    // б) в обратном порядке расположения элементов
    for (int i = 0; i < size; ++i) {
        reverse_order_array[i] = original_array[size - 1 - i];
    }

    std::cout << "Original array: ";
    for (int val : original_array) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Same order array: ";
    for (int val : same_order_array) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Reverse order array: ";
    for (int val : reverse_order_array) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
