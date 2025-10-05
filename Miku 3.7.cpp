#include <iostream>

int main() {
    int apartmentNumber;
    std::cout << "Введите номер квартиры: ";
    std::cin >> apartmentNumber;
    int floorNumber = (apartmentNumber - 1) / 3 + 1;
    std::cout << "Номер этажа: " << floorNumber << std::endl;
    return 0;
}
