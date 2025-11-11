

#include <iostream>
#include <vector>

int main() {
    int n;
    double p;
    std::cout << "Введите количество чисел (n): ";
    std::cin >> n;
    std::cout << "Введите пороговое значение (p): ";
    std::cin >> p;

    std::vector<double> b(n);
    double sum = 0.0;

    std::cout << "Введите " << n << " чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
        if (b[i] > p) {
            sum += b[i];
        }
    }

    std::cout << "Сумма чисел больше " << p << ": " << sum << std::endl;
    return 0;
}
