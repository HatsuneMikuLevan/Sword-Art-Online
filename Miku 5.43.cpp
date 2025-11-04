

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "n должно быть неотрицательным числом." << std::endl;
        return 1;
    }

    std::vector<double> a(n + 1);
    a[0] = 1.0;

    for (int k = 1; k <= n; ++k) {
        a[k] = (double)k * a[k - 1] + 1.0 / (double)k;
    }

    std::cout << std::fixed << std::setprecision(6);
    for (int i = 0; i <= n; ++i) {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }

    return 0;
}
