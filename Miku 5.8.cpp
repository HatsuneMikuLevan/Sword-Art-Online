
#include <iostream>
#include <iomanip>

int main() {
    const double grams_in_pound = 453.0;
    std::cout << "Фунты | Кг" << std::endl;
    std::cout << "------------" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        double kg = (i * grams_in_pound) / 1000.0;
        std::cout << std::setw(5) << i << " | " << std::fixed << std::setprecision(3) << kg << std::endl;
    }
    return 0;
}
