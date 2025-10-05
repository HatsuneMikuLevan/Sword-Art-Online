#include <iostream>
#include <iomanip>

int main() {
    double cost_candy, cost_cookies, cost_apples;
    double kg_candy, kg_cookies, kg_apples;

    std::cout << "Введите стоимость 1 кг конфет: ";
    std::cin >> cost_candy;
    std::cout << "Введите стоимость 1 кг печенья: ";
    std::cin >> cost_cookies;
    std::cout << "Введите стоимость 1 кг яблок: ";
    std::cin >> cost_apples;

    std::cout << "Введите количество купленных кг конфет: ";
    std::cin >> kg_candy;
    std::cout << "Введите количество купленных кг печенья: ";
    std::cin >> kg_cookies;
    std::cout << "Введите количество купленных кг яблок: ";
    std::cin >> kg_apples;

    double total_cost = cost_candy * kg_candy + cost_cookies * kg_cookies + cost_apples * kg_apples;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Общая стоимость покупки: " << total_cost << std::endl;

    return 0;
}
