7.46

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество чисел (n): ";
    std::cin >> n;

    std::vector<int> a(n);
    std::cout << "Введите " << n << " чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // a) a1 + an (индексы 0 и n-1)
    int result_a = a[0] + a[n - 1];
    // б) a2 - an-1 (индексы 1 и n-2)
    int result_b = a[1] - a[n - 2];

    std::cout << "a) a1 + an = " << result_a << std::endl;
    std::cout << "б) a2 - an-1 = " << result_b << std::endl;
    return 0;
}
