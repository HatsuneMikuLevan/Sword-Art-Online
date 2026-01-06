

#include <iostream>
#include <vector>

int main() {
    std::vector<int> capacities = {500, 1000, 2000, 4000, 8000, 500, 1000, 2000, 4000, 8000, 500, 1000, 2000, 4000, 8000, 500, 1000, 2000, 4000, 8000, 1000, 2000}; // Пример данных
    std::vector<int> prices = {2000, 3000, 4500, 7000, 12000, 2100, 3100, 4600, 7100, 12100, 2200, 3200, 4700, 7200, 12200, 2300, 3300, 4800, 7300, 12300, 3400, 4900}; // Пример данных
    int s;

    std::cout << "Введите пороговую стоимость s: ";
    std::cin >> s;

    std::cout << "Вместимость дисков, стоящих больше " << s << " руб.:" << std::endl;
    for (size_t i = 0; i < capacities.size(); ++i) {
        if (prices[i] > s) {
            std::cout << capacities[i] << " ГБ" << std::endl;
        }
    }

    return 0;
}
