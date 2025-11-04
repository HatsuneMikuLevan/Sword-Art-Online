

#include <iostream>

int main() {
    std::cout << "Четырехзначные числа с заданными остатками:" << std::endl;
    for (int i = 1000; i <= 9999; ++i) {
        if (i % 133 == 125 && i % 134 == 111) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
