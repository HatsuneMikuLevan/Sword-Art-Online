

#include <iostream>
#include <iomanip>

int main() {
    double exchangeRate;
    std::cout << "Введите текущий курс доллара к рублю: ";
    std::cin >> exchangeRate;
    std::cout << "Доллары\tРубли" << std::endl;
    for (int i = 1; i <= 20; ++i) {
        double rubles = i * exchangeRate;
        std::cout << i << "\t" << std::fixed << std::setprecision(2) << rubles << std::endl;
    }
    return 0;
}
