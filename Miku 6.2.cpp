

#include <iostream>

void solve_6_2() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    int i = 1;
    while (i <= n) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
}
