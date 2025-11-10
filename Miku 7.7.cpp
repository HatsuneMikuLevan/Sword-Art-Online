

#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество элементов в цепи: ";
    std::cin >> n;
    double sum_of_inverses = 0.0;
    for (int i = 0; i < n; ++i) {
        double resistance;
        std::cout << "Введите сопротивление элемента " << i + 1 << ": ";
        std::cin >> resistance;
        if (resistance != 0) {
            sum_of_inverses += 1.0 / resistance;
        }
    }
    if (sum_of_inverses != 0) {
        double total_resistance = 1.0 / sum_of_inverses;
        std::cout << "Общее сопротивление цепи: " << total_resistance << std::endl;
    } else {
        std::cout << "Невозможно вычислить общее сопротивление." << std::endl;
    }
    return 0;
}
