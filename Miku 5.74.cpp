#include <iostream>

int main() {
    std::cout << "Нечетные числа из [10, 100) (с if):" << std::endl;
    for (int i = 10; i < 100; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>

int main() {
    std::cout << "Нечетные числа из [10, 100) (без if):" << std::endl;
    for (int i = 11; i < 100; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
