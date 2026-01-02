

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

void reverseSubArray(std::vector<int>& arr, int start, int end) {
    // start and end are 0-based indices
    if (start >= 0 && end >= 0 && start < end && end < arr.size() && start < arr.size()) {
        std::reverse(arr.begin() + start, arr.begin() + end + 1);
    }
}

void solve_11154() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; // Пример массива
    std::vector<int> arr_a = arr;
    std::vector<int> arr_b = arr;
    std::vector<int> arr_v = arr;

    // a) элементы, расположенные между вторым и десятым элементами (т. е. с третьего по девятый)
    // Индексы: 2 (третий элемент) до 8 (девятый элемент)
    reverseSubArray(arr_a, 2, 8);
    std::cout << "a) Массив после перестановки (с 3 по 9): ";
    for (int x : arr_a) std::cout << x << " ";
    std::cout << std::endl;

    // б) элементы, расположенные между k-м и s-м элементами
    int k, s;
    std::cout << "Введите k и s (k < s) для пункта б): ";
    if (!(std::cin >> k >> s)) {
        std::cout << "Ошибка ввода k и s. Используются значения по умолчанию k=3, s=11." << std::endl;
        k = 3; s = 11;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\\n');
    }
    // Индексы: k (k+1 элемент) до s-2 (s-1 элемент)
    if (k >= 1 && s <= 15 && k < s) {
        reverseSubArray(arr_b, k, s - 2);
        std::cout << "б) Массив после перестановки (между k и s): ";
        for (int x : arr_b) std::cout << x << " ";
        std::cout << std::endl;
    } else {
        std::cout << "Некорректные значения k или s для пункта б)." << std::endl;
    }

    // в) элементы, расположенные между максимальным и минимальным элементами, включая их
    auto min_it = std::min_element(arr_v.begin(), arr_v.end());
    auto max_it = std::max_element(arr_v.begin(), arr_v.end());
    int min_idx = static_cast<int>(std::distance(arr_v.begin(), min_it));
    int max_idx = static_cast<int>(std::distance(arr_v.begin(), max_it));

    if (min_idx > max_idx) std::swap(min_idx, max_idx);
    reverseSubArray(arr_v, min_idx, max_idx);
    std::cout << "в) Массив после перестановки (между min и max): ";
    for (int x : arr_v) std::cout << x << " ";
    std::cout << std::endl;
}

int main() {
    solve_11154();
    return 0;
}
