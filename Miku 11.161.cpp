

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

void removeMaxAndMin(std::vector<int>& arr) {
    if (arr.size() < 2) return;

    int maxVal = arr[0], minVal = arr[0];
    int maxIdx = 0, minIdx = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
    }

    // Удаляем сначала элемент с большим индексом, чтобы не сбить индекс другого
    if (maxIdx > minIdx) {
        removeElementByIndex(arr, maxIdx);
        removeElementByIndex(arr, minIdx);
    } else {
        removeElementByIndex(arr, minIdx);
        removeElementByIndex(arr, maxIdx);
    }
}

int main() {
    std::vector<int> arr = {10, 4, 20, 5, 15, 2};

    removeMaxAndMin(arr);

    std::cout << "После удаления максимального и минимального: ";
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
