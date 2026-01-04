

#include <iostream>
#include <vector>

void solve_11205(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] == arr[i+1]) {
            std::cout << "Найдена первая пара одинаковых соседних элементов." << std::endl;
            // Номера элементов (используя 0-индексацию, можно добавить +1 для 1-индексации)
            std::cout << "Номера элементов: " << i << " и " << i+1 << std::endl;
            return;
        }
    }
    std::cout << "Одинаковых соседних элементов не найдено." << std::endl;
}

