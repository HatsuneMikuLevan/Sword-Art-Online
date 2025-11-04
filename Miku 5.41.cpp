

#include <iostream>

void sum_and_product_of_last_n_digits(long long number, int n) {
    long long sum = 0;
    long long product = 1;

    for (int i = 0; i < n; ++i) {
        int digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    std::cout << "Сумма последних " << n << " цифр: " << sum << std::endl;
    std::cout << "Произведение последних " << n << " цифр: " << product << std::endl;
}

int main() {
    long long number;
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    std::cout << "Введите n (количество последних цифр): ";
    std::cin >> n;
    sum_and_product_of_last_n_digits(number, n);
    return 0;
}
