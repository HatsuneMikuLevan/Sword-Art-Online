#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iomanip>

int main() {
    srand(time(0));
    int a, b;
    std::cout << "Введите a (нижний предел) и b (верхний предел):" << std::endl;
    std::cin >> a >> b;

    int min_val_int = std::min(a, b);
    int max_val_int = std::max(a, b);

    int m = rand() % 20 + 1; // m от 1 до 20
    int n = rand() % 20 + 1; // n от 1 до 20
    std::cout << "Случайное m: " << m << ", случайное n: " << n << std::endl;

    std::cout << n << " целых чисел от " << min_val_int << " до " << max_val_int << ":" << std::endl;
    for (int i = 0; i < n; ++i) {
        int random_num = rand() % (max_val_int - min_val_int + 1) + min_val_int;
        std::cout << random_num << " ";
    }
    std::cout << std::endl;

    std::cout << m << " вещественных чисел от 0 до " << n << ":" << std::endl;
    for (int i = 0; i < m; ++i) {
        double random_double = (double)rand() / RAND_MAX * n;
        std::cout << std::fixed << std::setprecision(4) << random_double << " ";
    }
    std::cout << std::endl;

    return 0;
}
