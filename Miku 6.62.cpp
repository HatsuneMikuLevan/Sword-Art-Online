#include <iostream>

void solve_6_62_a(int n) {
    int reversed_n = 0;
    int temp_n = n;
    while (temp_n > 0) {
        int digit = temp_n % 10;
        reversed_n = reversed_n * 10 + digit;
        temp_n /= 10;
    }
    std::cout << "а) " << reversed_n << std::endl;
}
#include <iostream>
#include <cmath>

void solve_6_62_b(int n) {
    int num_digits = 0;
    int temp_n = n;
    if (temp_n == 0) {
        num_digits = 1;
    } else {
        while (temp_n > 0) {
            temp_n /= 10;
            num_digits++;
        }
    }
    int result = 2 * static_cast<int>(pow(10, num_digits + 1)) + n * 10 + 2;
    std::cout << "б) " << result << std::endl;
}
#include <iostream>

void solve_6_62_v(int n, int a) {
    int new_n = 0;
    int power_of_10 = 1;
    if (n == 0 && a != 0) {
        new_n = 0;
    } else {
        while (n > 0) {
            int digit = n % 10;
            if (digit != a) {
                new_n += digit * power_of_10;
                power_of_10 *= 10;
            }
            n /= 10;
        }
    }
    std::cout << "в) " << new_n << std::endl;
}
#include <iostream>
#include <cmath>

void solve_6_62_g(int n) {
    if (n < 10) {
        std::cout << "г) " << n << std::endl;
        return;
    }
    int last_digit = n % 10;
    int num_digits = 0;
    int temp_n = n;
    while (temp_n > 0) {
        temp_n /= 10;
        num_digits++;
    }
    int first_digit = n / static_cast<int>(pow(10, num_digits - 1));
    int middle_part = n % static_cast<int>(pow(10, num_digits - 1));
    middle_part /= 10;
    int result = last_digit * static_cast<int>(pow(10, num_digits - 1)) + middle_part * 10 + first_digit;
    std::cout << "г) " << result << std::endl;
}
#include <iostream>
#include <cmath>

void solve_6_62_d(int n) {
    int num_digits = 0;
    int temp_n = n;
    if (temp_n == 0) {
        num_digits = 1;
    } else {
        while (temp_n > 0) {
            temp_n /= 10;
            num_digits++;
        }
    }
    int result = n * static_cast<int>(pow(10, num_digits)) + n;
    std::cout << "д) " << result << std::endl;
}
