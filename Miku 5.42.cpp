

#include <iostream>
#include <iomanip>

int main() {
    int n = 100;
    double position = 0.0;
    double total_distance = 0.0;

    for (int i = 1; i <= n; ++i) {
        double step_distance = 1.0 / i;
        total_distance += step_distance;

        if (i % 2 != 0) {
            position += step_distance; // Odd steps: towards work
        } else {
            position -= step_distance; // Even steps: towards home
        }
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Расстояние от дома после 100-го этапа: " << position << " км" << std::endl;
    std::cout << "Общий пройденный путь: " << total_distance << " км" << std::endl;

    return 0;
}
