
#include <iostream>

int main() {
    std::cout << "a) Трехзначные числа, чьи квадраты оканчиваются на само число:" << std::endl;
    for (int i = 100; i <= 999; ++i) {
        if ((i * i) % 1000 == i) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
