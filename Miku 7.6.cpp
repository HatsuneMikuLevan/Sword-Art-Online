

#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество элементов в цепи: ";
    std::cin >> n;
    double total_resistance = 0.0;
    for (int i = 0; i < n; ++i) {
        double resistance;
        std::cout << "Введите сопротивление элемента " << i + 1 << ": ";
        std::cin >> resistance;
        total_resistance += resistance;
    }
    std::cout << "Общее сопротивление цепи: " << total_resistance << std::endl;
    return 0;
}
