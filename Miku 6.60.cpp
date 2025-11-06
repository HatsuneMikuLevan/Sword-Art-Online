
#include <iostream>
#include <algorithm>

int main() {
    long long n;
    std::cout << "Введите натуральное число с различными цифрами: ";
    std::cin >> n;

    if (n < 100) {
        std::cout << "Число должно содержать как минимум две цифры." << std::endl;
        return 1;
    }

    long long temp_n = n;
    int max1 = -1, max2 = -1;
    int min1 = 10, min2 = 10;

    while (temp_n > 0) {
        int digit = temp_n % 10;
        
        // Обновление максимальных цифр
        if (digit > max1) {
            max2 = max1;
            max1 = digit;
        } else if (digit > max2) {
            max2 = digit;
        }

        // Обновление минимальных цифр
        if (digit < min1) {
            min2 = min1;
            min1 = digit;
        } else if (digit < min2) {
            min2 = digit;
        }

        temp_n /= 10;
    }

    std::cout << "Максимальные цифры: " << max1 << " и " << max2 << std::endl;
    std::cout << "Минимальные цифры: " << min1 << " и " << min2 << std::endl;

    return 0;
}
