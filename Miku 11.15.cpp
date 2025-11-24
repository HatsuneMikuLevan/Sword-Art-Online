

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> arr_desc(8);
    // а) Убывающая последовательность (например, от 8 до 1)
    for (int i = 0; i < 8; ++i) {
        arr_desc[i] = 8 - i;
    }

    std::vector<int> arr_asc(8);
    // б) Возрастающая последовательность (например, от 1 до 8)
    for (int i = 0; i < 8; ++i) {
        arr_asc[i] = i + 1;
    }

    // Вывод для проверки
    std::cout << "Убывающая: ";
    for (int x : arr_desc) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Возрастающая: ";
    for (int x : arr_asc) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
