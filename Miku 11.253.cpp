

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> originalArray = {1, -2, 3, -4, 5, 0, -6, 7};
    int n = originalArray.size();

    // --- Подпункт а) На тех же местах ---
    std::vector<int> second_a(n, 0); // Положительные (остальные нули)
    std::vector<int> third_a(n, 0);  // Остальные (положительные нули)

    for (int i = 0; i < n; ++i) {
        if (originalArray[i] > 0) {
            second_a[i] = originalArray[i];
        } else {
            third_a[i] = originalArray[i];
        }
    }

    std::cout << "Подпункт а) Второй массив (положительные): ";
    for (int x : second_a) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Подпункт а) Третий массив (остальные): ";
    for (int x : third_a) std::cout << x << " ";
    std::cout << std::endl;

    // --- Подпункт б) Подряд с начала массива ---
    std::vector<int> second_b;
    std::vector<int> third_b;

    for (int x : originalArray) {
        if (x > 0) {
            second_b.push_back(x);
        } else {
            third_b.push_back(x);
        }
    }

    std::cout << "Подпункт б) Второй массив (положительные): ";
    for (int x : second_b) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Подпункт б) Третий массив (остальные): ";
    for (int x : third_b) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
