

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    int temp_n = n;
    int sum_a = 0;
    int sum_b = 0;
    int multiplier = 1;
    int digit_count = 0;
    
    // Вычисление суммы для пункта а)
    while (temp_n > 0) {
        sum_a += (temp_n % 10) * multiplier;
        multiplier *= -1;
        temp_n /= 10;
    }
    
    // Вычисление суммы для пункта б)
    temp_n = n;
    multiplier = 1;
    while (temp_n > 0) {
        sum_b += (temp_n % 10) * multiplier;
        multiplier *= -1;
        temp_n /= 10;
        digit_count++;
    }
    if (digit_count % 2 == 0) {
        sum_b *= -1;
    }
    
    std::cout << "Знакочередующаяся сумма (а): " << sum_a << std::endl;
    std::cout << "Знакочередующаяся сумма (б): " << sum_b << std::endl;
    return 0;
}
