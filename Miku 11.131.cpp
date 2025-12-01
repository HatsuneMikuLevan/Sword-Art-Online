

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

void solve_11131(const std::vector<double>& weights) {
    if (weights.empty()) {
        std::cout << "Список весов пуст." << std::endl;
        return;
    }

    double min_weight = *std::min_element(weights.begin(), weights.end());
    double max_weight = *std::max_element(weights.begin(), weights.end());

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Минимальный вес: " << min_weight << std::endl;
    std::cout << "Максимальный вес: " << max_weight << std::endl;

    // Проверка: вес самого тяжелого превышает массу самого легкого более чем в 2 раза?
    bool condition = max_weight > 2.0 * min_weight;
    std::cout << "Условие выполняется: " << (condition ? "Да" : "Нет") << std::endl;
}

int main() {
    // Пример использования с тестовыми данными
    std::vector<double> group_weights = {60.5, 85.2, 55.0, 120.1, 70.0};
    solve_11131(group_weights);
    return 0;
}
