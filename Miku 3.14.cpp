#include <iostream>

int main() {
    int n;
    std::cout << "Введите номер квартиры: ";
    std::cin >> n;

    // 1) В каком подъезде находится квартира
    int entrance = (n - 1) / (9 * 6) + 1;
    std::cout << "Квартира " << n << " находится в подъезде " << entrance << "." << std::endl;

    // 2) На каком этаже этого подъезда она находится
    int floor = ((n - 1) % (9 * 6)) / 6 + 1;
    std::cout << "Она находится на " << floor << " этаже." << std::endl;

    // 3) Какой по счету на этаже является эта квартира
    int apartment_on_floor = (n - 1) % 6 + 1;
    std::cout << "Эта квартира является " << apartment_on_floor << " по счету на этаже." << std::endl;

    return 0;
}
