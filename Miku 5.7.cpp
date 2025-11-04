
#include <iostream>
#include <iomanip>

int main() {
    const double price = 20.4;
    std::cout << "Количество | Стоимость" << std::endl;
    std::cout << "----------------------" << std::endl;
    for (int i = 2; i <= 20; ++i) {
        std::cout << std::setw(10) << i << " | " << std::fixed << std::setprecision(2) << i * price << std::endl;
    }
    return 0;
}
