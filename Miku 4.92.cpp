

#include <iostream>
#include <cmath>

int main() {
    double t;
    std::cout << "Введите время в минутах t: ";
    std::cin >> t;

    double time_in_cycle = fmod(t, 6.0);

    if (time_in_cycle >= 0 && time_in_cycle < 3) {
        std::cout << "Горит зеленый сигнал." << std::endl;
    } else if (time_in_cycle >= 3 && time_in_cycle < 4) {
        std::cout << "Горит желтый сигнал." << std::endl;
    } else {
        std::cout << "Горит красный сигнал." << std::endl;
    }

    return 0;
}
