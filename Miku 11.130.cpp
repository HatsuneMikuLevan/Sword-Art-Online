

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

void solve_11130(const std::vector<double>& arr) {
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }

    double min_elem = *std::min_element(arr.begin(), arr.end());
    double max_elem = *std::max_element(arr.begin(), arr.end());

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Минимальный элемент: " << min_elem << std::endl;
    std::cout << "Максимальный элемент: " << max_elem << std::endl;

    // Пункт а) максимальный элемент превышает минимальный не более чем на 25;
    bool condition_a = (max_elem - min_elem) <= 25.0;
    std::cout << "Условие (а) выполняется: " << (condition_a ? "Да" : "Нет") << std::endl;

    // Пункт б) минимальный элемент меньше максимального более чем в 2 раза.
    // Это означает, что max_elem > 2 * min_elem ИЛИ min_elem < 0
    bool condition_b = (min_elem < 0.0) || (max_elem > 2.0 * min_elem);
    std::cout << "Условие (б) выполняется: " << (condition_b ? "Да" : "Нет") << std::endl;
}

int main() {
    // Пример использования с тестовыми данными
    std::vector<double> data = {10.5, 35.0, 5.2, 40.1, 15.0};
    solve_11130(data);
    return 0;
}
