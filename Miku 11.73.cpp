

#include <iostream>
#include <vector>

int count_students_height(const std::vector<double>& heights, double r) {
    int count = 0;
    for (double height : heights) {
        if (height <= r) {
            count++;
        }
    }
    return count;
}

