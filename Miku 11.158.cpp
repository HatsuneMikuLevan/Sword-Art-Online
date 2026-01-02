

#include <iostream>
#include <vector>
#include <algorithm>

void removeElementByIndex(std::vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        for (size_t i = index; i < arr.size() - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        arr.back() = 0;
    }
}

void removeMaxMin(std::vector<int>& arr, bool removeMax) {
    if (arr.empty()) return;

    int targetVal = arr[0];
    int targetIndex = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (removeMax) {
            if (arr[i] > targetVal) {
                targetVal = arr[i];
                targetIndex = i;
            }
        } else {
            if (arr[i] < targetVal) {
                targetVal = arr[i];
                targetIndex = i;
            }
        }
    }
    removeElementByIndex(arr, targetIndex);
}

int main() {
    std::vector<int> arr = {10, 4, 20, 5, 15};

    // Удаление максимального элемента
    std::vector<int> arrMax = arr;
    removeMaxMin(arrMax, true);
    std::cout << "После удаления максимального элемента: ";
    for (int x : arrMax) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Удаление минимального элемента
    std::vector<int> arrMin = arr;
    removeMaxMin(arrMin, false);
    std::cout << "После удаления минимального элемента: ";
    for (int x : arrMin) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
