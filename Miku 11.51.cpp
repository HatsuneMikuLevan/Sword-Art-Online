

#include <iostream>
#include <vector>
#include <numeric>

bool isSumNonNegative(const std::vector<int>& arr) {
    long long sum = std::accumulate(arr.begin(), arr.end(), 0LL);
    return sum >= 0;
}

int main() {
    std::vector<int> data1 = {1, 2, 3, -4, 5};
    std::vector<int> data2 = {-1, -2, -3, -4};

    std::cout << "Массив 1: Сумма неотрицательна? " << (isSumNonNegative(data1) ? "Да" : "Нет") << std::endl;
    std::cout << "Массив 2: Сумма неотрицательна? " << (isSumNonNegative(data2) ? "Да" : "Нет") << std::endl;

    return 0;
}
