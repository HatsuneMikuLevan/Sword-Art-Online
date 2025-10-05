#include <iostream>

int main() {
    int seatNumber;
    std::cout << "Введите номер места: ";
    std::cin >> seatNumber;
    int compartmentNumber = (seatNumber - 1) / 4 + 1;
    std::cout << "Номер купе: " << compartmentNumber << std::endl;
    return 0;
}
