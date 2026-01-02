

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11155() {
    // Пример массива:
    std::vector<int> arr = {1, 2, -3, 4, 5, -6, 7, -8, 9, -10};
    // std::vector<int> arr = {1, 2, 3, 4, 5}; // Только положительные
    // std::vector<int> arr = {-1, -2, -3, -4, -5}; // Только отрицательные
    // std::vector<int> arr = {0, 0, 0}; // Ни положительных, ни отрицательных

    int first_neg_idx = -1;
    int last_pos_idx = -1;

    // Находим первый отрицательный элемент
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            first_neg_idx = i;
            break;
        }
    }

    // Находим последний положительный элемент
    for (int i = static_cast<int>(arr.size()) - 1; i >= 0; --i) {
        if (arr[i] > 0) {
            last_pos_idx = i;
            break;
        }
    }

    if (first_neg_idx != -1 && last_pos_idx != -1) {
        std::swap(arr[first_neg_idx], arr[last_pos_idx]);
        std::cout << "Массив после обмена: ";
        for (int x : arr) std::cout << x << " ";
        std::cout << std::endl;
    } else {
        std::cout << "Обмен невозможен, так как отсутствуют первый отрицательный или последний положительный элементы." << std::endl;
    }
}

int main() {
    solve_11155();
    return 0;
}
