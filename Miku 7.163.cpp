

#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cout << "Введите количество покупателей (n): ";
    std::cin >> n;

    std::vector<double> t(n);
    std::cout << "Введите время обслуживания для каждого покупателя (t1, ..., tn): ";
    for (int i = 0; i < n; ++i) {
        std::cin >> t[i];
    }

    std::vector<double> c(n);
    double total_time = 0;
    for (int i = 0; i < n; ++i) {
        c[i] = total_time;
        total_time += t[i];
    }

    std::cout << "Время пребывания в очереди (c1, ..., cn): ";
    for (int i = 0; i < n; ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    double min_t = std::numeric_limits<double>::max();
    int last_min_index = -1;
    for (int i = 0; i < n; ++i) {
        if (t[i] <= min_t) {
            min_t = t[i];
            last_min_index = i + 1;
        }
    }

    std::cout << "Номер последнего покупателя с наименьшим временем обслуживания: " << last_min_index << std::endl;

    return 0;
}
