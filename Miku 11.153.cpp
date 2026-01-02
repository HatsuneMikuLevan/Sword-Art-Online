

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void print_array_153(const std::vector<int>& arr, const std::string& title) {
    std::cout << title << ": ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr(20);
    std::iota(arr.begin(), arr.end(), 1); // Заполнение от 1 до 20

    print_array_153(arr, "Начальный массив");

    if (arr.size() >= 6) {
        std::vector<int> first_three(arr.begin(), arr.begin() + 3);
        std::vector<int> last_three(arr.end() - 3, arr.end());

        // Копирование последних трех в начало
        std::copy(last_three.begin(), last_three.end(), arr.begin());
        // Копирование первых трех в конец
        std::copy(first_three.begin(), first_three.end(), arr.end() - 3);
    }
    print_array_153(arr, "После перестановки");

    return 0;
}
