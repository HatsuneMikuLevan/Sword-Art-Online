

#include <iostream>
#include <vector>
#include <limits>

{
    int n = distances.size();
    if (n == 0) return;

    double max_speed = -std::numeric_limits<double>::infinity();
    int car_index = -1;

    for (int i = 0; i < n; ++i) {
        // Assume times[i] > 0 to avoid division by zero
        double current_speed = distances[i] / times[i];
        if (current_speed > max_speed) {
            max_speed = current_speed;
            car_index = i + 1;
        }
    }
    std::cout << "Порядковый номер автомобиля с максимальной средней скоростью: " << car_index << std::endl;
}

