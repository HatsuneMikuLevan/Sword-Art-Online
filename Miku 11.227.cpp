

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    const int num_figures = 12;
    // Пример данных
    std::vector<double> lengths = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0};
    std::vector<double> widths = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 1.0};
    std::vector<double> heights = {3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 1.0, 2.0};

    std::cout << std::fixed << std::setprecision(2);

    // --- Способ 1: Без использования дополнительного массива ---
    std::cout << "--- Способ 1: Без дополнительного массива ---\n";
    for (int i = 0; i < num_figures; ++i) {
        double volume = lengths[i] * widths[i] * heights[i];
        std::cout << "Фигура " << i + 1 << ": Объем = " << volume << "\n";
    }

    // --- Способ 2: С использованием дополнительного массива ---
    std::cout << "\n--- Способ 2: С использованием дополнительного массива ---\n";
    std::vector<double> volumes(num_figures);
    for (int i = 0; i < num_figures; ++i) {
        volumes[i] = lengths[i] * widths[i] * heights[i];
        std::cout << "Фигура " << i + 1 << ": Объем = " << volumes[i] << "\n";
    }

    return 0;
}
