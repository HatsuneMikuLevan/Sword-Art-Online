

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    // Пример данных
    std::vector<int> x = {1, 2, 5, 3, 4, 2};
    int n = x.size();

    if (n < 2) {
        std::cout << "Недостаточно элементов для соседних сумм." << std::endl;
        return 1;
    }

    int maxSum = std::numeric_limits<int>::min();

    for (int i = 0; i < n - 1; ++i) {
        int currentSum = x[i] + x[i+1];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    std::cout << "Максимальная сумма двух соседних чисел: " << maxSum << std::endl;

    return 0;
}
