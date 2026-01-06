

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int days_in_feb;
    std::cout << "Введите количество дней в феврале (28 или 29): ";
    std::cin >> days_in_feb;

    std::vector<double> shop1_income(days_in_feb);
    std::vector<double> shop2_income(days_in_feb);

    std::cout << "Введите ежедневный доход для Магазина 1:\n";
    for (int i = 0; i < days_in_feb; ++i) {
        std::cout << "День " << i + 1 << ": ";
        std::cin >> shop1_income[i];
    }

    std::cout << "Введите ежедневный доход для Магазина 2:\n";
    for (int i = 0; i < days_in_feb; ++i) {
        std::cout << "День " << i + 1 << ": ";
        std::cin >> shop2_income[i];
    }

    double total_income_shop1 = std::accumulate(shop1_income.begin(), shop1_income.end(), 0.0);
    double total_income_shop2 = std::accumulate(shop2_income.begin(), shop2_income.end(), 0.0);

    if (total_income_shop1 < total_income_shop2) {
        std::cout << "Общий доход в Магазине 1 меньше (" << total_income_shop1 << ").\n";
    } else if (total_income_shop2 < total_income_shop1) {
        std::cout << "Общий доход в Магазине 2 меньше (" << total_income_shop2 << ").\n";
    } else {
        std::cout << "Общие доходы магазинов одинаковы (" << total_income_shop1 << ").\n";
    }

    return 0;
}
