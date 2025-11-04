
#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n (n >= 4): ";
    std::cin >> n;

    if (n < 4) {
        std::cout << "n должно быть не меньше 4." << std::endl;
        return 1;
    }

    std::vector<double> v(n + 1);
    v[1] = 0.0;
    v[2] = 0.0;
    v[3] = 1.5;

    for (int i = 4; i <= n; ++i) {
        v[i] = ((double)(i - 1) / ((double)i * i + 1.0)) * v[i - 1] - v[i - 2] + v[i - 3];
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "v[" << n << "] = " << v << std::endl;

    return 0;
}
