

#include <iostream>

int main() {
    double x, y;
    std::cout << "Введите координаты точки (x, y), x != 0, y != 0: ";
    std::cin >> x >> y;

    int quarter = (x > 0 && y > 0 ? 1 : (x < 0 && y > 0 ? 2 : (x < 0 && y < 0 ? 3 : 4)));

    std::cout << "Точка принадлежит четверти: " << quarter << std::endl;

    return 0;
}
