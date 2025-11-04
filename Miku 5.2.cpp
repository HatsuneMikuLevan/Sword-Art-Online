
#include <iostream>

int main() {
    int number, count;
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << "Введите количество повторений: ";
    std::cin >> count;
    for (int i = 0; i < count; ++i) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}
