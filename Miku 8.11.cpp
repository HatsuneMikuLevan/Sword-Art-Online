

#include <iostream>
#include <iomanip>

int main() {
    int n_val;
    std::cout << "Введите число n: ";
    std::cin >> n_val;

    double sum = 0.0;
    int k = 0;
    while (sum <= n_val) {
        k++;
        sum += 1.0 / k;
    }

    std::cout << "Первое число большее n: " << sum << " (получено при k = " << k << ")" << std::endl;

    return 0;
}
