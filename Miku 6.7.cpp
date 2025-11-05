

#include <iostream>
#include <cmath>

void solve_6_7() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    int i = 1;
    while (i * i <= n) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
}
