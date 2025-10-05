#include <iostream>
#include <cmath>

int main() {
    double R, r;
    std::cout << "Введите внешний радиус (R): ";
    std::cin >> R;
    std::cout << "Введите внутренний радиус (r): ";
    std::cin >> r;

    if (R > r && r > 0) {
        double S = M_PI * (pow(R, 2) - pow(r, 2));
        std::cout << "Площадь кольца: " << S << std::endl;
    } else {
        std::cout << "Ошибка: внешний радиус должен быть больше внутреннего, и оба радиуса должны быть положительными." << std::endl;
    }

    return 0;
}
