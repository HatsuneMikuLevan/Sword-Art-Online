

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    int sum = 0;
    int start_odd = n * (n - 1) + 1;
    for (int i = 0; i < n; ++i) {
        sum += start_odd;
        start_odd += 2;
    }
    std::cout << "Куб числа " << n << " равен: " << sum << std::endl;
    return 0;
}
