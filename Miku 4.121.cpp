

#include <iostream>
#include <string>

// Функция для задачи 4.121
std::string solve_4_121(double x) {
    return (x < 0) ? "I" : ((x < 5) ? "II" : "III");
}

int main() {
    double x_point = 3.2; // Пример координаты x

    std::cout << "Точка с координатой x = " << x_point << " попадает в область " << solve_4_121(x_point) << std::endl;
    
    return 0;
}
