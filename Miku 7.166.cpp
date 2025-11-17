

#include <iostream>
#include <vector>
#include <limits>
{
    int n = voltages.size();
    if (n == 0) return;

    double min_current = std::numeric_limits<double>::infinity();
    int resistance_index = -1;

    for (int i = 0; i < n; ++i) {
     
        double current = voltages[i] / resistances[i];
        if (current < min_current) {
            min_current = current;
            resistance_index = i + 1;
        }
    }
    std::cout << "Порядковый номер сопротивления, по которому проходит минимальный ток: " << resistance_index << std::endl;
}

