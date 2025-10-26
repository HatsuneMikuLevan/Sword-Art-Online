#include <iostream>
#include <cmath>

int main() {
    double t;
    std::cout << "Введите время t в минутах, прошедшее с начала часа: ";
    std::cin >> t;

    double t_norm = fmod(t, 8.0);

    if ((t_norm >= 0 && t_norm < 3) || (t_norm >= 5 && t_norm < 8)) {
        std::cout << "Горит зеленый сигнал." << std::endl;
    } else if (t_norm >= 3 && t_norm < 5) {
        std::cout << "Горит красный сигнал." << std::endl;
    } else {
        std::cout << "Некорректное время." << std::endl;
    }

    return 0;
}
