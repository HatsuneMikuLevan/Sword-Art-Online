

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void insertAroundMax(std::vector<int>& arr, int val1, int val2) {
    if (arr.empty()) return;

    // Находим максимальный элемент
    int maxVal = *std::max_element(arr.begin(), arr.end());
    int position = -1;

    // Находим позицию (индекс) любого из максимальных элементов
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == maxVal) {
            position = i;
            break; // Берем первый попавшийся
        }
    }

    if (position != -1) {

        arr.insert(arr.begin() + position, val2);

        arr.insert(arr.begin() + position + 2, val1);
    }
}

int main() {
    std::vector<int> arr = {1, 5, 3, 5, 2}; // Максимальный элемент 5
    int n = 10, m = 20; // Числа для вставки

    insertAroundMax(arr, n, m); 
    std::cout << "После вставки чисел " << n << " и " << m << ": ";
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl; // Ожидаем (если max в index 1): 1 20 5 10 3 5 2 
    
    return 0;
}
