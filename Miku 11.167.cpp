

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void insertNumberByCondition(std::vector<int>& arr, int value, bool afterNegative) {
    int position = -1;

    if (afterNegative) {
        // а) после первого отрицательного элемента
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] < 0) {
                position = i + 1;
                break;
            }
        }
    } else {
        // б) перед последним четным элементом
        for (int i = arr.size() - 1; i >= 0; --i) {
            if (arr[i] % 2 == 0) {
                position = i;
                break;
            }
        }
    }

    if (position != -1) {
        arr.insert(arr.begin() + position, value);
    } else {
        std::cout << "Подходящий элемент не найден." << std::endl;
    }
}

int main() {
    std::vector<int> arr_a = {1, -2, 3, -4, 5};
    // а) вставить 9 после первого отрицательного элемента (-2)
    insertNumberByCondition(arr_a, 9, true); 
    std::cout << "После вставки 9 после первого отрицательного элемента: ";
    for (int x : arr_a) std::cout << x << " ";
    std::cout << std::endl; // Ожидаем: 1 -2 9 3 -4 5

    std::vector<int> arr_b = {1, 3, 5, 2, 4};
    // б) вставить 7 перед последним четным элементом (4)
    insertNumberByCondition(arr_b, 7, false); 
    std::cout << "После вставки 7 перед последним четным элементом: ";
    for (int x : arr_b) std::cout << x << " ";
    std::cout << std::endl; // Ожидаем: 1 3 5 2 7 4
    
    return 0;
}
