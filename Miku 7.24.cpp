

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    double s;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    std::cout << "Введите вещественное число s: ";
    std::cin >> s;

    std::vector<double> d(n);
    std::cout << "Введите " << n << " вещественных чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> d[i];
    }

    double product = 1.0;
    for (double num : d) {
        product *= num;
    }

    if (product > s) {
        std::cout << "Да, произведение больше s." << std::endl;
    } else {
        std::cout << "Нет, произведение не больше s." << std::endl;
    }

    return 0;
}
