

#include <iostream>

long long sum_of_digits(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long number;
    std::cout << "Введите 9-значное число: ";
    std::cin >> number;
    std::cout << "Сумма цифр равна: " << sum_of_digits(number) << std::endl;
    return 0;
}
