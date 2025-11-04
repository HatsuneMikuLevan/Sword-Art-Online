

#include <iostream>

int main() {
    std::cout << "Трехзначные числа с заданными остатками:" << std::endl;
    for (int i = 100; i <= 999; ++i) {
        if (i % 47 == 43 && i % 43 == 45) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
