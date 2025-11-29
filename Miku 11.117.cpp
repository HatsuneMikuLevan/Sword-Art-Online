

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

void solve_117() {

    std::vector<double> heights = {175.0, 182.5, 165.0, 190.0, /* ... 21 другое значение ... */ 170.0};


    double max_height = INT_MIN;
    double min_height = INT_MAX;

 

    for (double height : heights) {
        if (height > max_height) {
            max_height = height;
        }
        if (height < min_height) {
            min_height = height;
        }
    }
    double difference = max_height - min_height;
    std::cout << "Разница в росте между самым высоким и самым низким человеком: " << difference << std::endl;
}
