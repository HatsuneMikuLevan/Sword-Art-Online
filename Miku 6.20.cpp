

#include <iostream>

int main() {
    int number = 12345;
    int temp_number = number;
    int sum = 0;
    int count = 0;
    long long product = 1;

    if (number == 0) {
        sum = 0;
        count = 1;
        product = 0;
    } else {
        while (temp_number > 0) {
            int digit = temp_number % 10;
            sum += digit;
            product *= digit;
            count++;
            temp_number /= 10;
        }
    }

    std::cout << "a) Сумма цифр: " << sum << std::endl;
    std::cout << "б) Количество цифр: " << count << std::endl;
    std::cout << "в) Произведение цифр: " << product << std::endl;

    return 0;
}
