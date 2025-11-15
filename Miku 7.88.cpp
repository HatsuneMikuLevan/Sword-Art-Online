

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    std::vector<int> a(n);
    std::cout << "Введите " << n << " целых чисел a1, ..., an: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int x;
    std::cout << "Введите целое число x для сравнения: ";
    std::cin >> x;

    int count_negative = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            count_negative++;
        }
    }

    if (count_negative > x) {
        std::cout << "Количество отрицательных чисел (" << count_negative << ") превышает x (" << x << "). Утверждение верно." << std::endl;
    } else {
        std::cout << "Количество отрицательных чисел (" << count_negative << ") не превышает x (" << x << "). Утверждение неверно." << std::endl;
    }

    return 0;
}
