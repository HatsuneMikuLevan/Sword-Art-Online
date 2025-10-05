#include <iostream>

int main() {
    int serialNumber;
    std::cout << "Введите серийный номер билета: ";
    std::cin >> serialNumber;
    int seatNumber = serialNumber - 1643;
    int rowNumber = (seatNumber - 1) / 15 + 1;
    std::cout << "Номер ряда: " << rowNumber << std::endl;
    return 0;
}
