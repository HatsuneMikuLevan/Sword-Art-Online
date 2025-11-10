

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> numbers = {2.5, 3.0, 4.0, 5.0}; // Пример чисел
    double product = 1.0;

    for (double num : numbers) {
        product *= num;
    }

    if (product < 10000.0) {
        std::cout << "Да, произведение меньше 10000." << std::endl;
    } else {
        std::cout << "Нет, произведение не меньше 10000." << std::endl;
    }

    return 0;
}
