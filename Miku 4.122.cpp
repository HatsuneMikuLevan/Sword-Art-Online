

#include <iostream>
#include <string>

int main() {
    double x, y;
    std::cout << "Введите координаты x и y: ";
    std::cin >> x >> y;

    std::string result = (x > 0) ? ((y > 5) ? "Область I" : ((y > 2.5) ? "Область II" : ((y > 0) ? "Область III" : "Точка не попадает в области"))) : "Точка не попадает в области";
    std::cout << "Точка попадает в " << result << std::endl;

    return 0;
}
