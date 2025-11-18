

#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    int k = 1;
    while (k * k <= n) {
        std::cout << k * k << " ";
        k++;
    }
    std::cout << std::endl;

    return 0;
}
