

#include <iostream>

int main() {
    std::cout << "Целые числа от 100 до 200, кратные трем:" << std::endl;
    for (int i = 100; i <= 200; ++i) {
        if (i % 3 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
