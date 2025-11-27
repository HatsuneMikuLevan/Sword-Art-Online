

#include <iostream>
#include <vector>
#include <numeric>

int count_non_negative(const std::vector<int>& arr) {
    int count = 0;
    for (int x : arr) {
        if (x >= 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> arr = {10, -5, 2, -1, 0, 5, -3};
    std::cout << "Количество неотрицательных элементов: " << count_non_negative(arr) << std::endl;
    return 0;
}
