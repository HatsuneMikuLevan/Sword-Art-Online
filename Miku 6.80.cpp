

#include <iostream>

void solve680() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 10) {
        std::cout << "Последовательность цифр упорядочена по возрастанию слева направо: да" << std::endl;
        return;
    }

    int reversed_n = 0;
    int temp = n;
    while (temp > 0) {
        reversed_n = reversed_n * 10 + temp % 10;
        temp /= 10;
    }

    bool is_ordered = true;
    int prev_digit = reversed_n % 10;
    reversed_n /= 10;
    while (reversed_n > 0) {
        int current_digit = reversed_n % 10;
        if (current_digit <= prev_digit) {
            is_ordered = false;
            break;
        }
        prev_digit = current_digit;
        reversed_n /= 10;
    }

    std::cout << "Последовательность цифр упорядочена по возрастанию слева направо: " << (is_ordered ? "да" : "нет") << std::endl;
}
