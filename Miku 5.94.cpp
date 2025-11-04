

#include <iostream>

void printNumbers(int k, int n) {
    if (k * k <= n) {
        std::cout << k << " ";
        printNumbers(k + 1, n);
    }
}

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    std::cout << "Натуральные числа, квадрат которых не превышает " << n << ": ";
    printNumbers(1, n);
    std::cout << std::endl;
    return 0;
}
