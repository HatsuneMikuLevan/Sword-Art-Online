

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum_odd = 0;

    for (int x : arr) {
        if (x % 2 != 0) {
            sum_odd += x;
        }
    }

    std::cout << "Сумма нечетных элементов: " << sum_odd << std::endl;

    return 0;
}
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3; // Заданное число
    int sum_multiple_k = 0;

    for (int x : arr) {
        if (x % k == 0) {
            sum_multiple_k += x;
        }
    }

    std::cout << "Сумма элементов, кратных " << k << ": " << sum_multiple_k << std::endl;

    return 0;
}
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int a = 3;
    int b = 4;
    int sum_multiple_a_or_b = 0;

    for (int x : arr) {
        if (x % a == 0 || x % b == 0) {
            sum_multiple_a_or_b += x;
        }
    }

    std::cout << "Сумма элементов, кратных " << a << " или " << b << ": " << sum_multiple_a_or_b << std::endl;

    return 0;
}
