

#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n (1-9): ";
    std::cin >> n;
    if (n >= 1 && n <= 9) {
        for (int i = 1; i <= 9; ++i) {
            std::cout << i << " x " << n << " = " << i * n << std::endl;
        }
    } else {
        std::cout << "Некорректный ввод. Число должно быть от 1 до 9." << std::endl;
    }
    return 0;
}
