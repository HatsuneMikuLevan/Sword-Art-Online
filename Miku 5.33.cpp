
#include <iostream>

double sum_of_fractions() {
    double sum = 0.0;
    for (int i = 2; i <= 10; ++i) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

int main() {
    std::cout << "Сумма равна: " << sum_of_fractions() << std::endl;
    return 0;
}
