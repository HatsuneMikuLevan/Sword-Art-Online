

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

bool isSumEven(const std::vector<int>& arr) {
    long long sum = std::accumulate(arr.begin(), arr.end(), 0LL);
    return sum % 2 == 0;
}

bool isSumOfSquaresFiveDigit(const std::vector<int>& arr) {
    long long sum_sq = 0;
    for (int x : arr) {
        sum_sq += static_cast<long long>(x) * x;
    }
    return sum_sq >= 10000 && sum_sq <= 99999;
}

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};

    std::cout << "a) Сумма четна? " << (isSumEven(data) ? "Да" : "Нет") << std::endl;
    std::cout << "б) Сумма квадратов пятизначна? " << (isSumOfSquaresFiveDigit(data) ? "Да" : "Нет") << std::endl;

    return 0;
}
