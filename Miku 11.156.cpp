

#include <iostream>
#include <vector>
#include <algorithm>

void removeElement(std::vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        for (size_t i = index; i < arr.size() - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        arr.back() = 0;
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 3; // k-й элемент (индекс k-1)

    // Удаление третьего элемента (индекс 2)
    removeElement(arr, 2);
    std::cout << "После удаления 3-го элемента: ";
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Удаление k-го элемента
    std::vector<int> arr_k = {1, 2, 3, 4, 5, 6};
    removeElement(arr_k, k - 1);
    std::cout << "После удаления k-го элемента: ";
    for (int x : arr_k) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
