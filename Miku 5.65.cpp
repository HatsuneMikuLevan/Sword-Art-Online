

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    int sum = 0;
    int odd_number = 1;
    for (int i = 0; i < n; ++i) {
        sum += odd_number;
        odd_number += 2;
    }
    std::cout << "Квадрат числа " << n << " равен: " << sum << std::endl;
    return 0;
}
