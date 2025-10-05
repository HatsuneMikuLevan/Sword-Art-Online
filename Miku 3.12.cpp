#include <iostream>

int main() {
    int n;
    std::cout << "Введите номер квартиры: ";
    std::cin >> n;

    // 1) На каком этаже находится квартира
    int floor = (n - 1) / 4 + 1;
    std::cout << "Квартира " << n << " находится на " << floor << " этаже." << std::endl;

    // 2) Какой по счету является эта квартира на этаже
    int apartment_on_floor = (n - 1) % 4 + 1;
    std::cout << "Эта квартира является " << apartment_on_floor << " по счету на этаже." << std::endl;

    return 0;
}
