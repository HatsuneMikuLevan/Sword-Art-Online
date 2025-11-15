

#include <iostream>
#include <vector>
#include <numeric>

bool countLessThanTwenty(const std::vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num < 20) {
            count++;
        }
    }
    return count == 5;
}

int main() {
    std::vector<int> numbers = {10, 25, 15, 30, 5, 50, 1, 2, 3}; // 5 numbers < 20
    if (countLessThanTwenty(numbers)) {
        std::cout << "Количество чисел, меньших 20, равно пяти." << std::endl;
    } else {
        std::cout << "Количество чисел, меньших 20, не равно пяти." << std::endl;
    }
    return 0;
}
