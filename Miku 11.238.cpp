

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int days_in_jan_march = 31;
    std::vector<double> jan_precip(days_in_jan_march);
    std::vector<double> mar_precip(days_in_jan_march);

    std::cout << "Введите количество осадков для каждого дня января:\n";
    for (int i = 0; i < days_in_jan_march; ++i) {
        std::cout << "Январь, день " << i + 1 << ": ";
        std::cin >> jan_precip[i];
    }

    std::cout << "Введите количество осадков для каждого дня марта:\n";
    for (int i = 0; i < days_in_jan_march; ++i) {
        std::cout << "Март, день " << i + 1 << ": ";
        std::cin >> mar_precip[i];
    }

    double total_jan = std::accumulate(jan_precip.begin(), jan_precip.end(), 0.0);
    double total_mar = std::accumulate(mar_precip.begin(), mar_precip.end(), 0.0);

    if (total_jan > total_mar) {
        std::cout << "В январе выпало больше осадков (" << total_jan << " мм) по сравнению с мартом (" << total_mar << " мм).\n";
    } else if (total_mar > total_jan) {
        std::cout << "В марте выпало больше осадков (" << total_mar << " мм) по сравнению с январем (" << total_jan << " мм).\n";
    } else {
        std::cout << "Количество осадков в январе и марте одинаково (" << total_jan << " мм).\n";
    }

    return 0;
}
