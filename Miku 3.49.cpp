#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double y;
    std::cout << "Введите угол y в радианах (0 < y <= 2*PI): ";
    std::cin >> y;


    if (y <= 0 || y > 2 * M_PI) {
        std::cout << "Ошибка: Угол y должен быть в диапазоне (0, 2*PI]." << std::endl;
        return 1;
    }

    
    double total_minutes = y / (M_PI / 360.0);


    int hours = static_cast<int>(total_minutes) / 60;
    int minutes = static_cast<int>(total_minutes) % 60;

    double minute_angle = minutes * (M_PI / 30.0);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Количество полных часов: " << hours << std::endl;
    std::cout << "Количество полных минут: " << minutes << std::endl;
    std::cout << "Угол для минутной стрелки (в радианах): " << minute_angle << std::endl;

    return 0;
}
