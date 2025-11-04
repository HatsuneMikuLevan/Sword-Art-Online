

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Константы
    const double PI = 3.14159265358979323846;
    const int num_spheres = 12;
    const double inner_diameter_cm = 10.0;
    const double wall_thickness_mm = 5.0;

    // Перевод единиц
    const double wall_thickness_cm = wall_thickness_mm / 10.0;

    // Начальный внутренний радиус первого шара
    double current_inner_radius_cm = inner_diameter_cm / 2.0;
    double total_volume_cm3 = 0.0;

    for (int i = 0; i < num_spheres; ++i) {
        // Внешний радиус текущего шара
        double current_outer_radius_cm = current_inner_radius_cm + wall_thickness_cm;

        // Объем материала текущего шара
        double volume_sphere_outer = (4.0 / 3.0) * PI * pow(current_outer_radius_cm, 3);
        double volume_sphere_inner = (4.0 / 3.0) * PI * pow(current_inner_radius_cm, 3);
        double volume_of_material_cm3 = volume_sphere_outer - volume_sphere_inner;
        
        // Добавление к общему объему
        total_volume_cm3 += volume_of_material_cm3;

        // Внутренний радиус следующего шара равен внешнему радиусу текущего
        current_inner_radius_cm = current_outer_radius_cm;
    }

    // Перевод общего объема в литры
    double total_volume_liters = total_volume_cm3 / 1000.0;

    // Вывод результата
    std::cout << "Суммарный объем вложенных шаров: " << std::fixed << std::setprecision(2) << total_volume_liters << " л" << std::endl;

    return 0;
}
