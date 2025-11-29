

#include <iostream>
#include <vector>
#include <limits>

void findMaxMinCountsSinglePass(const std::vector<int>& arr, int& maxCount, int& minCount) {
    if (arr.empty()) {
        maxCount = minCount = 0;
        return;
    }

    int maxVal = arr[0];
    int minVal = arr[0];
    maxCount = 1;
    minCount = 1;

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxCount = 1; // Сброс счетчика, найдено новое максимальное значение
        } else if (arr[i] == maxVal) {
            maxCount++;
        }

        if (arr[i] < minVal) {
            minVal = arr[i];
            minCount = 1; // Сброс счетчика, найдено новое минимальное значение
        } else if (arr[i] == minVal) {
            minCount++;
        }
    }
}
