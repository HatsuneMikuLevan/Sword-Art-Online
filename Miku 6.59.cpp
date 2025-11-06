

#include <iostream>
#include <algorithm>

int main() {
    long long n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "Минимальная цифра: 0, встречается 1 раз." << std::endl;
        return 0;
    }

    long long temp_n = n;
    int min_digit = 9;
    int count = 0;

    while (temp_n > 0) {
        int digit = temp_n % 10;
        if (digit < min_digit) {
            min_digit = digit;
            count = 1;
        } else if (digit == min_digit) {
            count++;
        }
        temp_n /= 10;
    }

    std::cout << "Минимальная цифра: " << min_digit << ", встречается " << count << " раз." << std::endl;

    return 0;
}
