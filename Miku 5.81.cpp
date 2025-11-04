
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
#include <iostream>

int main() {
    std::cout << "б) Трехзначные числа, кратные 7 с суммой цифр, кратной 7:" << std::endl;
    for (int i = 100; i <= 999; ++i) {
        if (i % 7 == 0) {
            int sum_digits = (i / 100) + ((i / 10) % 10) + (i % 10);
            if (sum_digits % 7 == 0) {
                std::cout << i << " ";
            }
        }
    }
    std::cout << std::endl;
    return 0;
}
