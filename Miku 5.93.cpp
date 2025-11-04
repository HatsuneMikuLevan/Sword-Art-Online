

#include <iostream>

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }
    int sumOfDivisors = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sumOfDivisors += i;
            if (i * i != n) {
                sumOfDivisors += n / i;
            }
        }
    }
    return sumOfDivisors == n;
}

int main() {
    int number;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    if (isPerfect(number)) {
        std::cout << "Число " << number << " является совершенным." << std::endl;
    } else {
        std::cout << "Число " << number << " не является совершенным." << std::endl;
    }
    return 0;
}
