#include <iostream>

int calculate_sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    // a) Для 4-значного числа
    int num4;
    std::cout << "Введите 4-значное число: ";
    std::cin >> num4;
    std::cout << "Сумма цифр 4-значного числа: " << calculate_sum_of_digits(num4) << std::endl;
    
    // б) Для 5-значного числа
    int num5;
    std::cout << "Введите 5-значное число: ";
    std::cin >> num5;
    std::cout << "Сумма цифр 5-значного числа: " << calculate_sum_of_digits(num5) << std::endl;
    
    return 0;
}
