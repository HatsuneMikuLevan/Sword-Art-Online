

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

    int minSum = std::numeric_limits<int>::max();

    for (int i = 0; i < n - 1; ++i) {
        int currentSum = x[i] + x[i+1];
        if (currentSum < minSum) {
            minSum = currentSum;
        }
    }

    std::cout << "Минимальная сумма двух соседних чисел: " << minSum << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    // Пример данных
    std::vector<int> x = {1, 5, 2, 5, 3, 4, 2}; // Максимальная сумма 7 (1+6 и 2+5)
    int n = x.size();

    if (n < 2) {
        std::cout << "Недостаточно элементов для соседних сумм." << std::endl;
        return 1;
    }

    int maxSum = std::numeric_limits<int>::min();
    int maxIdx = -1;

    for (int i = 0; i < n - 1; ++i) {
        int currentSum = x[i] + x[i+1];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxIdx = i;
        }
    }

    // Порядковые номера начинаются с 1
    std::cout << "Порядковые номера первой пары с максимальной суммой: " << maxIdx + 1 << " и " << maxIdx + 2 << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    // Пример данных
    std::vector<int> x = {5, 2, 5, 2, 3, 4, 2}; // Минимальная сумма 4 (индексы 1+2 и 3+4)
    int n = x.size();

    if (n < 2) {
        std::cout << "Недостаточно элементов для соседних сумм." << std::endl;
        return 1;
    }

    int minSum = std::numeric_limits<int>::max();
    int minIdx = -1;

    for (int i = 0; i < n - 1; ++i) {
        int currentSum = x[i] + x[i+1];
        if (currentSum <= minSum) {
            minSum = currentSum;
            minIdx = i;
        }
    }

    // Порядковые номера начинаются с 1
    std::cout << "Порядковые номера последней пары с минимальной суммой: " << minIdx + 1 << " и " << minIdx + 2 << std::endl;

    return 0;
}


