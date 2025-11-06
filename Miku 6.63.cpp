

#include <iostream>

void solve_6_63(int n) {
    int reversed_n = 0;
    int temp_n = n;
    while (temp_n > 0) {
        int digit = temp_n % 10;
        reversed_n = reversed_n * 10 + digit;
        temp_n /= 10;
    }
    if (n == reversed_n) {
        std::cout << "6.63. Число является палиндромом." << std::endl;
    } else {
        std::cout << "6.63. Число не является палиндромом." << std::endl;
    }
}
