
#include <iostream>
#include <vector>

void solve_11207(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {

        if (arr[i] % 2 != 0 && arr[i+1] % 2 != 0) {
            std::cout << "Найдена первая пара соседних нечетных чисел." << std::endl;

            std::cout << "Номера элементов: " << i << " и " << i+1 << std::endl;
            return;
        }
    }
    std::cout << "Пара соседних нечетных чисел не найдена." << std::endl;
}

