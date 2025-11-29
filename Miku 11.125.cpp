

#include <iostream>
#include <vector>

int countTallestPeople(const std::vector<int>& heights) {
    if (heights.empty()) return 0;

    int maxVal = heights[0];
    int maxCount = 1;

    for (int i = 1; i < heights.size(); ++i) {
        if (heights[i] > maxVal) {
            maxVal = heights[i];
            maxCount = 1; // Сброс счетчика, найдено новое максимальное значение
        } else if (heights[i] == maxVal) {
            maxCount++;
        }
    }
    return maxCount;
}
