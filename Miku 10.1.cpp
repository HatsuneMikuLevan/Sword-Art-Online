

#include <iostream>
#include <random>
#include <iomanip>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    // Диапазон (0, 1)
    std::uniform_real_distribution<> dis(0.0, 1.0); 

    std::cout << "8 случайных вещественных чисел n(0, 1):\n";
    for (int i = 0; i < 8; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis(gen) << "\n";
    }
    return 0;
}
