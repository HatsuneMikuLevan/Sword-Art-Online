

#include <iostream>
#include <vector>
#include <numeric>

bool hasEven(const std::vector<int>& arr) {
    for (int num : arr) {
        if (num % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 8, 9};
    if (hasEven(numbers)) {
        std::cout << "В наборе есть хотя бы одно четное число." << std::endl;
    } else {
        std::cout << "В наборе нет четных чисел." << std::endl;
    }
    return 0;
}
