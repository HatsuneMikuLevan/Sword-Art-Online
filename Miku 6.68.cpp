

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve_6_68(int a, int b) {
    int common_divisor = gcd(a, b);
    int p = a / common_divisor;
    int q = b / common_divisor;
    std::cout << "6.68. Сокращенная дробь " << a << "/" << b << " это " << p << "/" << q << std::endl;
}
