

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> originalArray = {1, -2, 3, -4, 5, 0, -6, 7};
    int n = originalArray.size();
    std::vector<int> newArray(n);

    int negativeIndex = 0;
    int otherIndex = 0; // Будет использоваться после первого прохода

    // Первый проход: записываем отрицательные элементы
    for (int i = 0; i < n; ++i) {
        if (originalArray[i] < 0) {
            newArray[negativeIndex++] = originalArray[i];
        }
    }

    
    for (int i = 0; i < n; ++i) {
        if (originalArray[i] >= 0) {
            newArray[negativeIndex++] = originalArray[i];
        }
    }

    std::cout << "Результирующий массив: ";
    for (int x : newArray) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
