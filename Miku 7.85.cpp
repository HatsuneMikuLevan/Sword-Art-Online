

#include <iostream>
#include <vector>
#include <numeric>

bool countMultipleOfFour(const std::vector<double>& arr) {
    int count = 0;
    for (double num : arr) {
        if (num > 33.2) {
            count++;
        }
    }
    return count % 4 == 0;
}

int main() {
    std::vector<double> numbers = {10.5, 40.1, 25.0, 35.5, 50.2, 15.3, 33.2, 44.4, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7}; // 4 numbers > 33.2
    if (countMultipleOfFour(numbers)) {
        std::cout << "Количество чисел, больших 33.2, кратно четырем." << std::endl;
    } else {
        std::cout << "Количество чисел, больших 33.2, не кратно четырем." << std::endl;
    }
    return 0;
}
