

#include <iostream>
#include <vector>

void solve_11206(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] == arr[i+1]) {
 
            if (i + 2 < arr.size()) {
                std::cout << "Элементы, следующие за первой парой одинаковых элементов: ";
                for (int j = i + 2; j < arr.size(); ++j) {
                    std::cout << arr[j] << " ";
                }
                std::cout << std::endl;
            } else {
                std::cout << "После первой пары одинаковых элементов других элементов нет." << std::endl;
            }
            return; 
        }
    }
    std::cout << "Одинаковых соседних элементов не найдено." << std::endl;
}

