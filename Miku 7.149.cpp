

#include <iostream>
#include <algorithm>
#include <climits>

void solve_7149() {
    int n;
    std::cout << "Введите количество людей в группе: ";
    std::cin >> n;

    double max_mass = -1.0;
    double min_mass = INT_MAX;

    for (int i = 0; i < n; ++i) {
        double mass;
        std::cout << "Введите массу человека #" << i + 1 << ": ";
        std::cin >> mass;

        if (mass > max_mass) {
            max_mass = mass;
        }
        if (mass < min_mass) {
            min_mass = mass;
        }
    }

    bool is_more_than_twice = (max_mass > 2.0 * min_mass);
    std::cout << "Масса самого тяжелого превышает массу самого легкого более чем в 2 раза: " << (is_more_than_twice ? "Верно" : "Неверно") << std::endl;
}
