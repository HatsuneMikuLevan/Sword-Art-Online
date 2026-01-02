

#include <iostream>
#include <vector>
#include <algorithm>

void insertNumber(std::vector<int>& arr, int position, int value) {

    arr.insert(arr.begin() + position, value); 
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int m = 3; // Пример значения для m

    // а) число 10 после второго элемента (позиция 2, индекс 2)
    insertNumber(arr, 2, 10);
    std::cout << "После вставки 10 после второго элемента: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl; // Ожидаем: 1 2 10 3 4 5

    // б) число 100 после m-го элемента (позиция m, индекс m)
    // Вектор уже изменен после пункта а)
    insertNumber(arr, m, 100); 
    std::cout << "После вставки 100 после m-го элемента: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl; // Если m=3, вставится после элемента 10. 
    
    return 0;
}
