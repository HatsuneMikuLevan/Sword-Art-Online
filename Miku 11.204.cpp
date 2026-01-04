

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11204(const std::vector<int>& arr, int a) {

    int first_smaller_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < a) {
            first_smaller_index = i;
            break;
        }
    }

    if (first_smaller_index == -1) {
        std::cout << "Элементов, меньших заданного числа " << a << ", нет." << std::endl;
    } else {
        // Напечатать все элементы, следующие за первым из таких элементов
        std::cout << "Элементы, следующие за первым элементом, меньшим " << a << ": ";
        for (int i = first_smaller_index + 1; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        // Напечатать все элементы, большие a
        std::cout << "Элементы, большие " << a << ": ";
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > a) {
                std::cout << arr[i] << " ";
            }
        }
        std::cout << std::endl;
    }
}
