6.83

#include <iostream>

void solve683() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 10) {
        std::cout << "Цифры образуют монотонную последовательность: да" << std::endl;
        return;
    }

    int reversed_n = 0;
    int temp = n;
    while (temp > 0) {
        reversed_n = reversed_n * 10 + temp % 10;
        temp /= 10;
    }

    bool is_increasing = true;
    bool is_decreasing = true;

    int prev_digit = reversed_n % 10;
    reversed_n /= 10;

    while (reversed_n > 0) {
        int current_digit = reversed_n % 10;
        if (current_digit <= prev_digit) {
            is_increasing = false;
        }
        if (current_digit >= prev_digit) {
            is_decreasing = false;
        }
        prev_digit = current_digit;
        reversed_n /= 10;
    }

    std::cout << "Цифры образуют монотонно возрастающую или убывающую последовательность: " << (is_increasing || is_decreasing ? "да" : "нет") << std::endl;
}
