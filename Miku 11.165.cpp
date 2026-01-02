11.165

#include <iostream>
#include <vector>
#include <unordered_set>
#include <numeric>

void removeDuplicates(std::vector<int>& arr) {
    std::unordered_set<int> seen;
    int j = 0;
    for (int i = 0; i < arr.size(); ++i) {
        // Если элемент еще не встречался
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[j++] = arr[i];
        }
    }
    // Заполнение оставшихся элементов нулями
    for (int i = j; i < arr.size(); ++i) {
        arr[i] = 0;
    }
    // Изменение размера массива до j
    arr.resize(j);
}

