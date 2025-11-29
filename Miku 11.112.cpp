

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    // Пример массива
    std::vector<int> arr = {10, 20, 5, 40, 30};
    auto max_it = std::max_element(arr.begin(), arr.end());
    auto min_it = std::min_element(arr.begin(), arr.end());
    int max_val = *max_it;
    int min_val = *min_it;
    int diff = max_val - min_val;
    int max_idx = std::distance(arr.begin(), max_it);
    int min_idx = std::distance(arr.begin(), min_it);
    std::cout << "а) Максимальный элемент: " << max_val << std::endl;
    std::cout << "б) Минимальный элемент: " << min_val << std::endl;
    std::cout << "в) Разница: " << diff << std::endl;
    std::cout << "г) Индекс максимального элемента: " << max_idx << std::endl;
    std::cout << "д) Индексы минимального и максимального элементов: " << min_idx << ", " << max_idx << std::endl;
    return 0;
}
