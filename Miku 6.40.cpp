

#include <iostream>
#include <string>

int solve_6_40(int n) {
    if (n == 0) {
        return 1;
    }

    int temp_n = n;
    int first_digit = 0;
    while (temp_n > 0) {
        first_digit = temp_n % 10;
        temp_n /= 10;
    }

    int count = 0;
    temp_n = n;
    while (temp_n > 0) {
        if (temp_n % 10 == first_digit) {
            count++;
        }
        temp_n /= 10;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    int count = solve_6_40(n);
    std::cout << "Количество вхождений первой цифры: " << count << std::endl;
    return 0;
}
