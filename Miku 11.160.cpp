

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

void removeTarget(std::vector<int>& arr, bool removeFirstNegative) {
    int indexToRemove = -1;

    if (removeFirstNegative) {
        for (size_t i = 0; i < arr.size(); ++i) {
            if (arr[i] < 0) {
                indexToRemove = i;
                break;
            }
        }
    } else {
        for (int i = arr.size() - 1; i >= 0; --i) {
            if (arr[i] % 2 == 0) {
                indexToRemove = i;
                break;
            }
        }
    }

    if (indexToRemove != -1) {
        removeElementByIndex(arr, indexToRemove);
    }
}

int main() {
    std::vector<int> arr = {1, -2, 3, 4, -5, 6, 7, 8};

    // Удаление первого отрицательного элемента
    std::vector<int> arrNeg = arr;
    removeTarget(arrNeg, true);
    std::cout << "После удаления первого отрицательного: ";
    for (int x : arrNeg) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Удаление последнего четного элемента
    std::vector<int> arrEven = arr;
    removeTarget(arrEven, false);
    std::cout << "После удаления последнего четного: ";
    for (int x : arrEven) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
