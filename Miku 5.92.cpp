

#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    if (isPrime(number)) {
        std::cout << "Число " << number << " является простым." << std::endl;
    } else {
        std::cout << "Число " << number << " не является простым." << std::endl;
    }
    return 0;
}
