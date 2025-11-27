

#include <iostream>
#include <vector>

int count_elements_in_range(const std::vector<double>& arr, double a, double b) {
    int count = 0;
  
    for (double element : arr) {
        if (element >= a && element <= b) {
            count++;
        }
    }
    return count;
}

