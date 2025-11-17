

#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <iomanip>
{
    int n = a.size();
    if (n == 0) return;

  
    double max_am = -std::numeric_limits<double>::infinity();
    int last_am_index = -1;
    for (int i = 0; i < n; ++i) {
        double current_am = (a[i] + b[i]) / 2.0;
        if (current_am >= max_am) {
            max_am = current_am;
            last_am_index = i + 1;
        }
    }
    std::cout << "а) Номер последней пары с максимальным средним арифметическим: " << last_am_index << std::endl;

    // Part b: Min Geometric Mean (first index if multiple)
    double min_gm = std::numeric_limits<double>::infinity();
    int first_gm_index = -1;
    for (int i = 0; i < n; ++i) {
        double current_gm = std::sqrt(a[i] * b[i]);
        if (current_gm < min_gm) {
            min_gm = current_gm;
            first_gm_index = i + 1;
        }
    }
    std::cout << "б) Номер первой пары с минимальным средним геометрическим: " << first_gm_index << std::endl;
}

