#include <iostream>

int main() {
    int n;
    std::cout << "Введите номер места: ";
    std::cin >> n;

    // 1) В какой секции находится товар
    int section = ((n - 1) % (8 * 15)) / 15 + 1;
    std::cout << "Товар находится в секции " << section << "." << std::endl;

    // 2) На каком ярусе находится товар
    int tier = (n - 1) / (8 * 15) + 1;
    std::cout << "Товар находится на ярусе " << tier << "." << std::endl;

    return 0;
}
