

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    // Пример данных
    std::vector<int> x = {1, 5, 2, 8, 3, 9, 4, 6};
    int n = x.size();

    if (n < 2) {
        std::cout << "Недостаточно элементов." << std::endl;
        return 1;
    }

    int max1 = std::numeric_limits<int>::min();
    int max2 = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        if (x[i] > max1) {
            max2 = max1;
            max1 = x[i];
        } else if (x[i] > max2) {
            max2 = x[i];
        }
    }

    std::cout << "Два максимальных элемента: " << max1 << " и " << max2 << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    // Пример данных
    std::vector<int> x = {1, 5, 2, 8, 3, 9, 4, 6};
    int n = x.size();

    if (n < 2) {
        std::cout << "Недостаточно элементов." << std::endl;
        return 1;
    }

    int min1 = std::numeric_limits<int>::max();
    int min2 = std::numeric_limits<int>::max();

    for (int i = 0; i < n; ++i) {
        if (x[i] < min1) {
            min2 = min1;
            min1 = x[i];
        } else if (x[i] < min2) {
            min2 = x[i];
        }
    }

    std::cout << "Два минимальных элемента: " << min1 << " и " << min2 << std::endl;

    return 0;
}
