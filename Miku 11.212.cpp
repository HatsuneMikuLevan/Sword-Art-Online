

#include <iostream>
#include <vector>

void solve_11_212(const std::vector<int>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] > arr[i+1]) {
            std::cout << "Массив не упорядочен. Первый элемент, нарушающий порядок, имеет индекс: " << i+1 << " (значение: " << arr[i+1] << ")" << std::endl;
            return;
        }
    }
    std::cout << "Массив упорядочен по возрастанию" << std::endl;
}
