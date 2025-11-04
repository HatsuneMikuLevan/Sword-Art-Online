

#include <iostream>

int main() {
    std::cout << "Нечетные двузначные числа, оканчивающиеся на 3 или 7:" << std::endl;
    for (int i = 10; i < 100; ++i) {
        if (i % 2 != 0 && (i % 10 == 3 || i % 10 == 7)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
