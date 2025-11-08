4.89

#include <iostream>

int main() {
    int a, b, c, d, n, m;
    std::cout << "Введите время прибытия поезда (a b): ";
    std::cin >> a >> b;
    std::cout << "Введите время отправления поезда (c d): ";
    std::cin >> c >> d;
    std::cout << "Введите время прихода пассажира (n m): ";
    std::cin >> n >> m;

    int arrival_minutes = a * 60 + b;
    int departure_minutes = c * 60 + d;
    int passenger_minutes = n * 60 + m;

    if (passenger_minutes >= arrival_minutes && passenger_minutes <= departure_minutes) {
        std::cout << "Поезд будет стоять на платформе." << std::endl;
    } else {
        std::cout << "Поезд не будет стоять на платформе." << std::endl;
    }

    return 0;
}
