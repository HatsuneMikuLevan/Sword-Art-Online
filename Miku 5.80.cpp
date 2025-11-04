#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n (от 1 до 9): ";
    std::cin >> n;

    std::cout << "Двузначные числа, которые делятся на " << n << " или содержат цифру " << n << ":" << std::endl;
    for (int i = 10; i < 100; ++i) {
        if (i % n == 0  i / 10 == n  i % 10 == n) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
